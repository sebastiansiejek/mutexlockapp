//
//  LockStore.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 29/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef LockStore_hpp
#define LockStore_hpp

#include <stdio.h>
#include "../MutexLockStore.hpp"

class LockStore : public MutexLockStore
{
private:
    std::vector<Lock*> store;
public:
    void display() override;
    void add(Lock*) override;
};

#endif /* LockStore_hpp */
