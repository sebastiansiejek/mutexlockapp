//
//  LockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "LockMenu.hpp"



void LockMenu::menu()
{
    std::cout <<
    "[1] Create Lock \n"
    "[2] Display locks \n"
    ;
}

void LockMenu::options(int option, MutexLockStore* store)
{
    switch (option) {
        case 1:
            MutexLockStore::addLockToStore(MutexLockFactory::createLock(), store);
            break;
        case 2:
            std::cout << "Locks: \n";
            for (int i = 0; i <= store->lockStore.size() - 1; i++) {
                std::cout << i+1 << ". " << store->lockStore[i].getName() << std::endl;
            }
            break;
        default:
            break;
    }
}
