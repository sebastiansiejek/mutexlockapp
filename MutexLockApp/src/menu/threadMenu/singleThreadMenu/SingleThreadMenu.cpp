//
//  SingleThreadMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 05/01/2019.
//  Copyright © 2019 Sebastian Siejek. All rights reserved.
//

#include "SingleThreadMenu.hpp"

std::list<std::string> SingleThreadMenu::menuOptions = {
    "Display threads in lock"
};

void SingleThreadMenu::menu()
{
    int i = 0;
    for (auto const& opt : SingleThreadMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}

void SingleThreadMenu::options(int option)
{
    switch (option) {
        case 1:
            break;
        default:
            break;
    }
}
