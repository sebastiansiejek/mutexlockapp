//
//  ThreadsInLockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 31/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "ThreadsInLockMenu.hpp"

std::list<std::string> ThreadsInLockMenu::menuOptions = {
    "Close lock (lock())", "Open lock (unlock())", "Try lock"
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
    if(!lock->isClosed()) {
        std::cout << lock->getName() << " is NOT closed.\n";
        return;
    }
    if(lock->getClosingThread()->getName() == thread->getName()) {
        lock->openLock(thread);
        std::cout << "Lock " << lock->getName() << " was open";
        lock->pushWaitingThreadsToLock();
    } else {
        std::cout << "Thread " << thread->getName() << " did not closed " << "lock " << lock->getName();
    }
}

void ThreadsInLockMenu::tryLock(Thread * thread, Lock* lock)
{
    if(!lock->isClosed()) {
        lock->setCloseLock(thread);
        std::cout << lock->getName() << " was closed by " << thread->getName();
    } else {
        std::cout << "Lock " << lock->getName() << " was open, so it was closed.";
    }
}

void ThreadsInLockMenu::options(int option, Thread* thread, Lock* lock)
{
    switch (option) {
        case 1:
            ThreadsInLockMenu::closeLock(thread, lock);
            break;
        case 2:
            ThreadsInLockMenu::openLock(thread, lock);
            break;
        case 3:
            ThreadsInLockMenu::tryLock(thread, lock);
            break;
        default:
            break;
    }
}
