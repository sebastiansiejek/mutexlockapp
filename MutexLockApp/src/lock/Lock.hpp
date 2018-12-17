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

class Lock : public MutexLock {
private:
    std::string name;
public:
    Lock(std::string);
};

#endif /* lock_hpp */
