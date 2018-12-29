//
//  factoryMutexLock.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "MutexLockFactory.hpp"

Lock * MutexLockFactory::createLock(std::string name)
{
    return new class Lock(name);
}

Thread * MutexLockFactory::createThread(std::string name)
{
    return new class Thread(name);
}
