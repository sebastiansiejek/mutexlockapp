//
//  Menu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "Menu.hpp"

void Menu::displayMenu()
{
    std::cout <<
        "[1] Lock \n"
        "[2] Thread \n"
        "[0] Exit \n"
    ;
}

void Menu::selectOption(int option, MutexLockStore* store)
{
    switch (option) {
        case 1:
            LockMenu::menu();
            std::cout << "Select option: ";
            std::cin >> option;
            LockMenu::options(option, store);
            break;
        default:
            break;
    }
}
