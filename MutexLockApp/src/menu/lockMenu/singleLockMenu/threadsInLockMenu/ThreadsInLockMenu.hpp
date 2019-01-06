//
//  ThreadsInLockMenu.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 31/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef ThreadsInLockMenu_hpp
#define ThreadsInLockMenu_hpp

#include <stdio.h>
#include <iostream>
#include "../SingleLockMenu.hpp"
#include "../../../Menu.hpp"

class ThreadsInLockMenu
{
private:
    static std::list<std::string> menuOptions;
public:
    static void menu();
    static void options(int, Thread*, Lock*);
    static void closeLock(Thread*, Lock*);
};

#endif /* ThreadsInLockMenu_hpp */
