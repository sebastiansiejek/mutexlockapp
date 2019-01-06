//
//  lockStoreStatic.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 05/01/2019.
//  Copyright © 2019 Sebastian Siejek. All rights reserved.
//

#include "lockStoreStatic.hpp"

std::vector<Lock*> LockStoreStatic::store = {};

std::vector<Lock*> LockStoreStatic::getStore()
{
    return LockStoreStatic::store;
}

unsigned long int LockStoreStatic::getStoreSize()
{
    return getStore().size();
}

bool LockStoreStatic::isEmpty()
{
    if(getStoreSize() == 0)
        return true;
    else
        return false;
}

void LockStoreStatic::add(Lock* lock)
{
    LockStoreStatic::store.push_back(lock);
}

void LockStoreStatic::display()
{
    if(getStoreSize() > 0) {
        std::cout << "Locks:\n";
        for (int i = 0; i <= getStoreSize() - 1; i++) {
            std::cout << i+1 << ". " << getStore()[i]->getName();
            if(getStore()[i]->isClosed())
                std::cout << " - " << "closed\n";
            else
                std::cout << " - " << "open\n";
        }
    } else {
        std::cout << "Lock store is EMPTY\n";
    }
}

Lock* LockStoreStatic::find(int menuIndex)
{
    for(int i = 0; i <= getStoreSize(); i++) {
        if (i == menuIndex - 1) {
            return getStore()[i];
        }
    }
    return nullptr;
}
