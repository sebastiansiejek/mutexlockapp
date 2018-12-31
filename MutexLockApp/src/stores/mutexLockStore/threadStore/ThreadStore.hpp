//
//  ThreadStore.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 29/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef ThreadStore_hpp
#define ThreadStore_hpp

#include <stdio.h>
#include "../MutexLockStore.hpp"

class ThreadStore : public MutexLockStore
{
private:
    std::vector<Thread*> store;
public:
    void display() override;
    void add(Thread*) override;
    bool isEmpty() override;
    std::vector<Thread*> const getStore();
    Thread* getThread(int);
};

#endif /* ThreadStore_hpp */
