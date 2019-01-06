//
//  ThreadStoreStatic.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 05/01/2019.
//  Copyright © 2019 Sebastian Siejek. All rights reserved.
//

#ifndef ThreadStoreStatic_hpp
#define ThreadStoreStatic_hpp

#include <stdio.h>

#include "../../../mutexLock/thread/Thread.hpp"

class ThreadStoreStatic
{
private:
    static std::vector<Thread*> store;
public:
    static unsigned long int getStoreSize();
    static std::vector<Thread*> getStore();
    static bool isEmpty();
    static void add(Thread*);
    static void display();
    Thread* find(int);
    static bool isThreadExist(std::string);
};

#endif /* ThreadStoreStatic_hpp */
