//
//  lockStoreStatic.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 05/01/2019.
//  Copyright © 2019 Sebastian Siejek. All rights reserved.
//

#ifndef lockStoreStatic_hpp
#define lockStoreStatic_hpp

#include <stdio.h>
#include "../../../mutexLock/lock/Lock.hpp"

class LockStoreStatic
{
private:
    static std::vector<Lock*> store;
public:
    static unsigned long int getStoreSize();
    static std::vector<Lock*> getStore();
    static bool isEmpty();
    static void add(Lock*);
    static void display();
    static Lock* find(int);
    static bool lockNameExist(std::string);
};

#endif /* lockStoreStatic_hpp */
