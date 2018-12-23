//
//  lock.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 10/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef lock_hpp
#define lock_hpp

#include "../mutexLock/mutexLock.hpp"
#include <stdio.h>
#include <string>
#include <iostream>

class Lock {
private:
    std::string name;
public:
    Lock(std::string);
    std::string getName();
};

#endif /* lock_hpp */
