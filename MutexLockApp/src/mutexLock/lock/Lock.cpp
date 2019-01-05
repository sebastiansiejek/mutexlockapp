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
    this->_name = name;
    
    std::cout << "Lock " << name << " was created.\n";
}

std::string Lock::getName()
{
    return this->_name;
}

std::vector<Thread*> Lock::getThreadsInLock()
{
    return this->threadsInLock;
}

void Lock::pushThreadToLock(Thread* thread)
{
    this->threadsInLock.push_back(thread);
}

void Lock::displayThreadsInLock()
{
    for (int i = 0; i <= this->getThreadsInLock().size()-1; i++) {
        std::cout << "[" << i + 1 << "] " << this->getThreadsInLock()[i]->getName() << std::endl;
    }
}
