//
//  lock.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 10/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "Lock.hpp"

Lock::Lock(std::string name)
{
    this->name = name;
    std::cout << "Lock " << name << " was created.\n";
}

std::string Lock::getName()
{
    return this->name;
}
