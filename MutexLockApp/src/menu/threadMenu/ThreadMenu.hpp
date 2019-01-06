//
//  ThreadMenu.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef ThreadMenu_hpp
#define ThreadMenu_hpp

#include <stdio.h>
#include <list>
#include "../../stores/mutexLockStore/MutexLockStore.hpp"
#include "../../stores/mutexLockStore/lockStoreStatic/lockStoreStatic.hpp"
#include "../../stores/mutexLockStore/threadStoreStatic/ThreadStoreStatic.hpp"

class ThreadMenu : public MutexLockStore
{
private:private:
    static std::list<std::string> menuOptions;
public:
    static void menu();
    static void options(int);
    static void addToStore();
    static void addToLock();
};

#endif /* ThreadMenu_hpp */
