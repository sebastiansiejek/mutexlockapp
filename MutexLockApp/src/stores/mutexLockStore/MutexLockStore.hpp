//
//  MutexLockStore.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 27/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef MutexLockStore_hpp
#define MutexLockStore_hpp

#include <stdio.h>
#include <vector>
#include "../../mutexLock/lock/Lock.hpp"
#include "../../mutexLock/thread/Thread.hpp"

class MutexLockStore
{
public:
    std::vector<Lock> lockStore;
    std::vector<Thread> threadStore;
};

#endif /* MutexLockStore_hpp */
