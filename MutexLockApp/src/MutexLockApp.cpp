//
//  MutexLockApp.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 27/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "menu/Menu.hpp"
#include "stores/mutexLockStore/MutexLockStore.hpp"
#include "mutexLock/mutexLock.hpp"

class MutexLockApp : public Menu
{
public:
    MutexLockStore *store = new MutexLockStore;

    MutexLockApp()
    {
        int option = 1;

        while(option != 0)
        {
            Menu::displayMenu();
            std::cout << "Select option: ";
            std::cin >> option;
            Menu::selectOption(option, store);
            std::cout << std::endl;
        }
    }
};
