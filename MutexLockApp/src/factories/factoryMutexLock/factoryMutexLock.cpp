//
//  factoryMutexLock.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "factoryMutexLock.hpp"

MutexLock * FactoryMutexLock::createMutexLock(int type) {
    
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
