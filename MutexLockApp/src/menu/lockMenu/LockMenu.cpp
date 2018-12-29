//
//  LockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "LockMenu.hpp"

std::list<std::string> LockMenu::menuOptions = {
    "Create lock", "Display locks"
};

void LockMenu::menu()
{
    int i = 0;
    for (auto const& opt : LockMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}

void LockMenu::create(MutexLockStore* store)
{
    std::string lockName;
    std::cout << "Enter lock name: ";
    std::cin >> lockName;
    MutexLockStore::addLockToStore(MutexLockFactory::createLock(lockName), store);
}

void LockMenu::displayAll(MutexLockStore* store)
{
    std::cout << "Locks: \n";
    for (int i = 0; i <= store->lockStore.size() - 1; i++) {
        std::cout << i+1 << ". " << store->lockStore[i].getName() << std::endl;
    }
}

void LockMenu::options(int option, MutexLockStore* store)
{
    switch (option) {
        case 1:
            LockMenu::create(store);
            break;
        case 2:
            LockMenu::displayAll(store);
            break;
        default:
            break;
    }
}
