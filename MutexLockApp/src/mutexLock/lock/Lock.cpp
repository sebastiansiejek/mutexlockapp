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

std::vector<Thread*> Lock::getWaitingThreads()
{
    return this->_waitingThreads;
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

void Lock::openLock(Thread* thread)
{
    if (this->isClosed()) {
        if (this->getClosingThread()->getName() == thread->getName()) {
            this->_closed.isClosed = false;
        }
    }
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

bool Lock::isThreadInLockExist(std::string name)
{
    for(auto& e : this->getThreadsInLock()) {
        if(e->getName() == name)
            return true;
    }
    return false;
}

bool Lock::isThreadInWaitingExist(std::string name)
{
    for(auto& e : this->getWaitingThreads()) {
        if(e->getName() == name)
            return true;
    }
    return false;
}

void Lock::pushThreadToWaiting(Thread* thread)
{
    this->_waitingThreads.push_back(thread);
}

void Lock::displayThreadsWaitingUnderLock()
{
    if(this->getWaitingThreads().size() > 0) {
        for(unsigned int i=0; i<=this->getWaitingThreads().size() - 1; i++) {
            std::cout << "[" << i + 1 << "] " << this->_waitingThreads[i]->getName() << std::endl;
        }
    } else {
        std::cout << "No thread is waiting under lock";
    }
}

void Lock::pushWaitingThreadsToLock()
{
    if(this->getWaitingThreads().size() > 0) {
        for(auto &e : this->getWaitingThreads()) {
            this->_threadsInLock.push_back(e);
        }
        this->_waitingThreads.clear();
        std::cout << "\nWaiting threads under lock were moved to lock\n";
    }
}
