//
//  factoryMutexLock.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef factoryMutexLock_hpp
#define factoryMutexLock_hpp

#include <stdio.h>
#include "../../src/thread/Thread.hpp"
#include "../../src/lock/Lock.hpp"
#include "../../src/mutexLock/mutexLock.hpp"

class MutexLockFactory
{
public:
    virtual int pure() = 0;
    static class Thread * createThread();
    static class Lock * createLock();
};

#endif /* factoryMutexLock_hpp */
