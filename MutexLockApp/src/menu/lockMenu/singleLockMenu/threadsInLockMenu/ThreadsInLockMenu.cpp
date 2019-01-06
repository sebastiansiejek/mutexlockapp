//
//  ThreadsInLockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 31/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "ThreadsInLockMenu.hpp"

std::list<std::string> ThreadsInLockMenu::menuOptions = {
    "Close lock"
};

void ThreadsInLockMenu::menu()
{
    int i = 0;
    for (auto const& opt : ThreadsInLockMenu::menuOptions) {
        i++;
        std::cout << "\n[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}

void ThreadsInLockMenu::options(int option, Thread* thread, Lock* lock)
{
    switch (option) {
        case 1:
            ThreadsInLockMenu::closeLock(thread, lock);
        default:
            break;
    }
}

void ThreadsInLockMenu::closeLock(Thread* thread, Lock* lock)
{
    lock->setCloseLock(thread);
    std::cout << "Lock " << lock->getName() << " was closed";
}
