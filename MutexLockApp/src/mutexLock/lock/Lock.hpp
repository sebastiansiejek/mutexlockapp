//
//  lock.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 10/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef lock_hpp
#define lock_hpp

#include "../mutexLock.hpp"
#include "../thread/Thread.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

class Lock : public MutexLock
{
private:
    std::string _name;
    std::vector<Thread*> threadsInLock;
public:
    Lock(std::string);
    std::string getName() override;
};

#endif /* lock_hpp */
