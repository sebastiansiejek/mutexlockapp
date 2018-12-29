//
//  LockStore.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 29/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "LockStore.hpp"

void LockStore::display()
{
    if(this->store.size() > 0) {
        std::cout << "Locks: \n";
        for (int i = 0; i <= this->store.size() - 1; i++) {
            std::cout << i+1 << ". " << this->store[i]->getName() << std::endl;
        }
    } else {
        std::cout << "Lock store is EMPTY";
    }
}

void LockStore::add(Lock* lock)
{
    this->store.push_back(lock);
}
