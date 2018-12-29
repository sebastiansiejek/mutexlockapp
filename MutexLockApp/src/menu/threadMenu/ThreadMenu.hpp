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

class ThreadMenu
{
private:
    static std::list<std::string> menuOptions;
public:
    static void menu();
    static void options(int, MutexLockStore*);
    static void create(MutexLockStore*);
    static void displayAll(MutexLockStore*);
};

#endif /* ThreadMenu_hpp */
