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

class FactoryMutexLock
{
enum MutexType{
    Thread,
    Lock
};
public:
    MutexLock * createMutexLock(int);
};

#endif /* factoryMutexLock_hpp */
