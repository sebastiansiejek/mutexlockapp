//
//  SingleLockMenu.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 30/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef SingleLockMenu_hpp
#define SingleLockMenu_hpp

#include <stdio.h>
#include "../LockMenu.hpp"
#include "../../../mutexLock/lock/Lock.hpp"

class SingleLockMenu
{
private:
    static std::list<std::string> menuOptions;
public:
    static void menu();
    static void options(int, Lock*);
};

#endif /* SingleLockMenu_hpp */
