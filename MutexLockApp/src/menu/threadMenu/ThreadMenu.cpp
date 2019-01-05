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
        lockStore.find(lockIndex)->pushThreadToLock(threadStore.find(threadIndex));
        
        std::cout << "Thread " << threadStore.find(threadIndex)->getName() << " was added to " << lockStore.find(lockIndex)->getName();
    }
}

void ThreadMenu::options(int option)
{
    switch (option) {
        case 1:
            ThreadStoreStatic::add(ThreadMenu::addToStore());
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

