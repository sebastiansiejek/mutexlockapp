//
//  SingleLockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 30/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "SingleLockMenu.hpp"

std::list<std::string> SingleLockMenu::menuOptions = {
    "Display threads in lock", "Select thread", "Display thread that closed lock", "Display threads waiting under lock"
};

void SingleLockMenu::menu()
{
    int i = 0;
    for (auto const& opt : SingleLockMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}

void SingleLockMenu::selectThread(Lock* lock)
{
    lock->displayThreadsInLock();
    int option = 0;
    std::cout << "Select thread: ";
    std::cin >> option;
    
    Thread* thread = lock->getThreadFromLock(option);
    std::cout << "You selected thread: ";
    std::cout << thread->getName();
    ThreadsInLockMenu::menu();
    std::cout << "Select option: ";
    int threadOption = 0;
    std::cin >> threadOption;
    ThreadsInLockMenu::options(threadOption, thread, lock);
}

void SingleLockMenu::displayClosingThread(Lock* lock)
{
    if(lock->isClosed())
        std::cout << "Thread that closed lock: " << lock->getClosingThread()->getName();
    else
        std::cout << "Lock is OPEN";
}

void SingleLockMenu::options(int option, Lock* lock)
{
    switch (option) {
        case 1:
            if(lock->getThreadsInLock().size() > 0) {
                std::cout << "Threads in lock: \n";
                lock->displayThreadsInLock();
            } else {
                std::cout << "Lock " << lock->getName() << " has NOT threads ";
            }
            break;
        case 2:
            SingleLockMenu::selectThread(lock);
            break;
        case 3:
            SingleLockMenu::displayClosingThread(lock);
            break;
        case 4:
            lock->displayThreadsWaitingUnderLock();
            break;
        default:
            break;
    }
}
