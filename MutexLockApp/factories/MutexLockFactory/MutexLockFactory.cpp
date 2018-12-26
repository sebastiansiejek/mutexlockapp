//
//  factoryMutexLock.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "MutexLockFactory.hpp"

MutexLock * MutexLockFactory::createMutexLock(int type) {
    
    MutexLock *mutexLock = NULL;
    
    switch(type) {
        case 1:
            mutexLock = new class Thread("test");
            break;
        default:
            printf("%s", "Invalid type");
            return NULL;
    }
    
    return NULL;
}

Lock * MutexLockFactory::createLock()
{
    return new class Lock("test");
}

Thread * MutexLockFactory::createThread()
{
    return new class Thread("test");
}
