//
//  ThreadStoreStatic.cpp
//  MutexThreadApp
//
//  Created by Sebastian Siejek on 05/01/2019.
//  Copyright © 2019 Sebastian Siejek. All rights reserved.
//

#include "ThreadStoreStatic.hpp"

std::vector<Thread*> ThreadStoreStatic::store = {};

std::vector<Thread*> ThreadStoreStatic::getStore()
{
    return ThreadStoreStatic::store;
}

unsigned long int ThreadStoreStatic::getStoreSize()
{
    return getStore().size();
}

bool ThreadStoreStatic::isEmpty()
{
    if(getStoreSize() == 0)
        return true;
    else
        return false;
}

void ThreadStoreStatic::add(Thread* Thread)
{
    ThreadStoreStatic::store.push_back(Thread);
}

void ThreadStoreStatic::display()
{
    if(getStoreSize() > 0) {
        std::cout << "Threads:\n";
        for (int i = 0; i <= getStoreSize() - 1; i++) {
            std::cout << i+1 << ". " << getStore()[i]->getName() << std::endl;
        }
    } else {
        std::cout << "Thread store is EMPTY\n";
    }
}

Thread* ThreadStoreStatic::find(int menuIndex)
{
    for(int i = 0; i <= getStoreSize(); i++) {
        if (i == menuIndex - 1) {
            return getStore()[i];
        }
    }
    return nullptr;
}

bool ThreadStoreStatic::isThreadExist(std::string name)
{
    if(!isEmpty()) {
        for(auto& e : getStore()) {
            if(e->getName() == name) {
                return true;
            }
        }
    }
    return false;
}
