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
    return this->_threadsInLock;
}

void Lock::pushThreadToLock(Thread* thread)
{
    this->_threadsInLock.push_back(thread);
}

void Lock::displayThreadsInLock()
{
    for (int i = 0; i <= this->getThreadsInLock().size()-1; i++) {
        std::cout << "[" << i + 1 << "] " << this->getThreadsInLock()[i]->getName() << std::endl;
    }
}

Thread* Lock::getThreadFromLock(int menuIndex = 0)
{
    if (this->getThreadsInLock().size() > 0)
        return this->_threadsInLock[menuIndex - 1];
    else
        return nullptr;
}

void Lock::setCloseLock(Thread* thread)
{
    this->_closed.isClosed = true;
    this->_closed.thread = thread;
}

bool Lock::isClosed()
{
    if(this->_closed.isClosed == true)
        return true;
    else
        return false;
}


Thread* Lock::getClosingThread()
{
    return this->_closed.thread;
}

bool Lock::threadInLockExist(std::string name)
{
    for(auto& e : this->getThreadsInLock()) {
        if(e->getName() == name)
            return true;
    }
    return false;
}
