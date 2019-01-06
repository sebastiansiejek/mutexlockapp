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


void ThreadMenu::addToStore()
{
    std::string threadName;
    std::cout << "Enter thread name: ";
    std::cin >> threadName;
    if(ThreadStoreStatic::isThreadExist(threadName))
        std::cout << "Thread " << threadName << " already exist\n";
    else
        return ThreadStoreStatic::add(MutexLockFactory::createThread(threadName));
}

void ThreadMenu::addToLock()
{
    if (ThreadStoreStatic::isEmpty()) {
        std::cout << "Thread store is empty\n";
        return;
    } else if (LockStoreStatic::isEmpty()) {
        std::cout << "Lock store is empty\n";
        return;
    } else {
        int threadIndex = 0;
        ThreadStoreStatic::display();
        std::cout << "Select thread: ";
        std::cin >> threadIndex;

        int lockIndex = 0;
        LockStoreStatic::display();
        std::cout << "Select lock: ";
        std::cin >> lockIndex;

        ThreadStoreStatic threadStore;
        threadStore.find(threadIndex);
        LockStoreStatic lockStore;
        
        Lock* lock = lockStore.find(lockIndex);
        Thread* thread = threadStore.find(threadIndex);
        
        if(!lock->isClosed()) {
            if(!lock->isThreadInLockExist(thread->getName())) {
                lock->pushThreadToLock(threadStore.find(threadIndex));
                std::cout << "Thread " << thread->getName() << " was added to " << lock->getName();
            } else {
                std::cout << "Thread " << thread->getName() << " already exist in " << lock->getName();
            }
        } else {
            lock->pushThreadToWaiting(thread);
            std::cout << "Lock " << lock->getName() << " is closed. " << "Thread " << thread->getName() << " is waitng under lock.";
        }
    }
}

void ThreadMenu::options(int option)
{
    switch (option) {
        case 1:
            ThreadMenu::addToStore();
            break;
        case 2:
            ThreadMenu::addToLock();
            break;
        case 3:
            ThreadStoreStatic::display();
            break;
        default:
            break;
    }
}

