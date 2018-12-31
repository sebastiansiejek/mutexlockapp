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
#include "../../stores/mutexLockStore/MutexLockStore.hpp"
#include "../../stores/mutexLockStore/lockStore/LockStore.hpp"
#include "singleLockMenu/SingleLockMenu.hpp"

class LockMenu : public MutexLockStore
{
private:
    static std::list<std::string> menuOptions;
public:
    static void menu();
    static void options(int, MutexLockStore*);
    static Lock* add();
    static void selectLock(MutexLockStore*);
};

#endif /* LockMenu_hpp */
