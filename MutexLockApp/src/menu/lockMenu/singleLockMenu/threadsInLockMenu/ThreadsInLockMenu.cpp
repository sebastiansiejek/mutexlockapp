//
//  ThreadsInLockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 31/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "ThreadsInLockMenu.hpp"

std::list<std::string> ThreadsInLockMenu::menuOptions = {
    "Close lock", "Open lock"
};

void ThreadsInLockMenu::menu()
{
    int i = 0;
    std::cout << std::endl;
    for (auto const& opt : ThreadsInLockMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}

void ThreadsInLockMenu::closeLock(Thread* thread, Lock* lock)
{
    if(lock->isClosed()) {
        std::cout << "Lock " << lock->getName() << " has already been closed by " << lock->getClosingThread()->getName();
    } else {
        lock->setCloseLock(thread);
        std::cout << "Lock " << lock->getName() << " was closed.";
    }
}

void ThreadsInLockMenu::openLock(Thread* thread, Lock* lock)
{
    if (lock->getClosingThread()->getName() == thread->getName()) {
        
    } else {
        std::cout << "Thread " << thread->getName() << " did not closed " << "lock " << lock->getName();
    }
}

void ThreadsInLockMenu::options(int option, Thread* thread, Lock* lock)
{
    switch (option) {
        case 1:
            ThreadsInLockMenu::closeLock(thread, lock);
        default:
            ThreadsInLockMenu::openLock(thread, lock);
            break;
    }
}
