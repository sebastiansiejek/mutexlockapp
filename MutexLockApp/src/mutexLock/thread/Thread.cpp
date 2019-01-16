//
//  Thread.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "Thread.hpp"

Thread::Thread(std::string name)
{
    this->_name = name;
}

std::string Thread::getName()
{
    return this->_name;
}

void Thread::setWaiting()
{
    this->_isWaiting = true;
}

bool Thread::getIsWaiting()
{
    return this->_isWaiting;
}
