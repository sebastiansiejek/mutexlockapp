//
//  ThreadMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "ThreadMenu.hpp"

std::list<std::string> ThreadMenu::menuOptions = {
    "Create thread", "Display threads"
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

void ThreadMenu::create(MutexLockStore* store)
{
    std::string lockName;
    std::cout << "Enter thread name: ";
    std::cin >> lockName;
    MutexLockStore::addThreadToStore(MutexLockFactory::createThread(lockName), store);
}

void ThreadMenu::displayAll(MutexLockStore* store)
{
    std::cout << "Threads: \n";
    for (int i = 0; i <= store->threadStore.size() - 1; i++) {
        std::cout << i+1 << ". " << store->threadStore[i].getName() << std::endl;
    }
}

void ThreadMenu::options(int option, MutexLockStore* store)
{
    switch (option) {
        case 1:
            ThreadMenu::create(store);
            break;
        case 2:
            ThreadMenu::displayAll(store);
            break;
        default:
            break;
    }
}

