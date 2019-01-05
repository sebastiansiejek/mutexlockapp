//
//  SingleLockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 30/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "SingleLockMenu.hpp"

std::list<std::string> SingleLockMenu::menuOptions = {
    "Display threads in lock", "Select thread"
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
    std::cout << "You selected thread: ";
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
        default:
            break;
    }
}
