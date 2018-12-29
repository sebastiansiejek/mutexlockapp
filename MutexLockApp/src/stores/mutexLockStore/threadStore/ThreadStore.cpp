//
//  ThreadStore.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 29/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "ThreadStore.hpp"

void ThreadStore::display()
{
    if(this->store.size() > 0) {
        std::cout << "Threads: \n";
        for (int i = 0; i <= this->store.size() - 1; i++) {
            std::cout << i+1 << ". " << this->store[i]->getName() << std::endl;
        }
    } else {
        std::cout << "Thread store is EMPTY";
    }
}

void ThreadStore::add(Thread* thread)
{
    this->store.push_back(thread);
}
