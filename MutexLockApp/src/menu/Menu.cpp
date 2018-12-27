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
        "[1] Create Lock \n"
        "[2] Create Thread \n"
        "[0] Exit \n"
    ;
}

void Menu::selectOption(int option)
{
    switch (option) {
        case 1:
            MutexLockFactory::createThread();
            break;
        default:
            break;
    }
}
