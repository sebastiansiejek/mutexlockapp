//
//  ThreadMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "ThreadMenu.hpp"

std::list<std::string> ThreadMenu::menuOptions = {
    "Create thread", "Add thread to lock", "Display threads"
};

void ThreadMenu::menu()
{
    int i = 0;
    for (auto const& opt : ThreadMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}


Thread* ThreadMenu::addToStore()
{
    std::string lockName;
    std::cout << "Enter thread name: ";
    std::cin >> lockName;
    return MutexLockFactory::createThread(lockName);
}

void ThreadMenu::addToLock(MutexLockStore* threadStore, MutexLockStore* lockStore)
{
    int threadIndex = 0;
    threadStore->display();
    std::cout << "Select thread: ";
    std::cin >> threadIndex;
    std::cout << "Select lock: ";
    lockStore->display();
    
}

void ThreadMenu::options(int option, MutexLockStore* threadStore, MutexLockStore* lockStore)
{
    switch (option) {
        case 1:
            threadStore->add(ThreadMenu::addToStore());
            break;
        case 2:
            ThreadMenu::addToLock(threadStore, lockStore);
            break;
        case 3:
            threadStore->display();
            break;
        default:
            break;
    }
}

