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
        "create: \n"
        "[1] Lock \n"
        "[2] Thread \n"
    ;
}

int Menu::selectOption(int optionNumber)
{
    return this->selectedOption = optionNumber;
}

Lock* Menu::factory()
{
    switch (this->selectedOption) {
        case 1:
            return new Lock("test");
            break;
            
        default:
            break;
    }
    return new Lock("test");
}
