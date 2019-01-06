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
    std::vector<Thread*> _threadsInLock;
    std::vector<Thread*> _waitingThreads;
    struct {
        bool isClosed = false;
        Thread* thread;
    } _closed;
public:
    Lock(std::string);
    std::string getName() override;
    std::vector<Thread*> getThreadsInLock();
    std::vector<Thread*> getWaitingThreads();
    Thread* getClosingThread();
    Thread* getThreadFromLock(int);
    bool isClosed();
    bool isThreadInLockExist(std::string);
    bool isThreadInWaitingExist(std::string);
    void pushThreadToLock(Thread*);
    void displayThreadsInLock();
    void setCloseLock(Thread*);
    void pushThreadToWaiting(Thread*);
    void displayThreadsWaitingUnderLock();
};

#endif /* lock_hpp */
