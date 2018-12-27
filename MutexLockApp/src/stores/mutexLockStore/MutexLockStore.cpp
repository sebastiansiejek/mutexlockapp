//
//  MutexLockStore.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 27/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "MutexLockStore.hpp"

void MutexLockStore::addLockToStore(Lock* lock, MutexLockStore* store)
{
    store->lockStore.push_back(*lock);
}
