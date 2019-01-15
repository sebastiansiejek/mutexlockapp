//
//  LockMenu.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef LockMenu_hpp
#define LockMenu_hpp

#include <stdio.h>
#include <list>
#include "singleLockMenu/SingleLockMenu.hpp"
#include "../../factories/MutexLockFactory/MutexLockFactory.hpp"
#include "../../stores/mutexLockStore/lockStoreStatic/lockStoreStatic.hpp"

class LockMenu
{
private:
    static std::list<std::string> menuOptions;
public:
    static void menu();
    static void options(int);
    static void add();
    static void selectLock();
};

#endif /* LockMenu_hpp */
