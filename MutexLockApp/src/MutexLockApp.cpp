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

class MutexLockApp : public Menu
{
public:
    MutexLockApp()
    {
        int option = 1;

        while(option != 0)
        {
            Menu::displayMenu();
            std::cout << "Choose an option: ";
            std::cin >> option;
            Menu::selectOption(option);
            std::cout << std::endl;
        }
    }
};
