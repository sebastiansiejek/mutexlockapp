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
#include "../../mutexLock/thread/Thread.hpp"
#include "../../mutexLock/lock/Lock.hpp"
#include "../../mutexLock/mutexLock.hpp"

class MutexLockFactory
{
public:
    virtual int pure() = 0;
    static class Thread * createThread(std::string);
    static class Lock * createLock(std::string);
};

#endif /* factoryMutexLock_hpp */
