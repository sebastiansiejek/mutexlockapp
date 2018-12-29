//
//  mutexLock.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef mutexLock_hpp
#define mutexLock_hpp

#include <stdio.h>
#include <vector>
#include <string>

class MutexLock
{
public:
    virtual std::string getName() = 0;
};

#endif /* mutexLock_hpp */
