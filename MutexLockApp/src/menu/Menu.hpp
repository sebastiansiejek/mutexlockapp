//
//  Menu.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>
#include <iostream>
#include <list>
#include "./lockMenu/LockMenu.hpp"
#include "./../factories/MutexLockFactory/MutexLockFactory.hpp"
#include "./../stores/mutexLockStore/MutexLockStore.hpp"

class Menu : public LockMenu
{
private:
    int selectedOption;
    static std::list<std::string> menuOptions;
public:
//    int virtual pure() = 0;
    static void displayMenu();
    static void selectOption(int, MutexLockStore*);
};

#endif /* Menu_hpp */
