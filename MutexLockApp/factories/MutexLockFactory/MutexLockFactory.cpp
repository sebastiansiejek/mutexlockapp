//
//  factoryMutexLock.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "MutexLockFactory.hpp"

Lock * MutexLockFactory::createLock()
{
    return new class Lock("test");
}

Thread * MutexLockFactory::createThread()
{
    return new class Thread("test");
}
