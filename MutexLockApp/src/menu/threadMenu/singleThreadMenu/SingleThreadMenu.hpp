//
//  SingleThreadMenu.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 05/01/2019.
//  Copyright © 2019 Sebastian Siejek. All rights reserved.
//

#ifndef SingleThreadMenu_hpp
#define SingleThreadMenu_hpp

#include <stdio.h>
#include <list>
#include "../../../stores/mutexLockStore/threadStoreStatic/ThreadStoreStatic.hpp"

class SingleThreadMenu
{
private:
    static std::list<std::string> menuOptions;
public:
    static void menu();
    static void options(int);
};

#endif /* SingleThreadMenu_hpp */
