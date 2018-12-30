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

bool LockStore::isEmpty()
{
    if (this->store.size() > 0)
        return false;
    else
        return true;
}

std::vector<Lock*> const LockStore::getStore()
{
    return this->store;
}

Lock* LockStore::find(int menuIndex)
{
    for(int i = 0; i <= this->getStore().size() - 1; i++) {
        if (i == menuIndex - 1) {
            return this->getStore()[i];
        }
    }
    return nullptr;
}
