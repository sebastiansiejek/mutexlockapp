//
//  SingleLockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 30/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "SingleLockMenu.hpp"

std::list<std::string> SingleLockMenu::menuOptions = {
    "Display threads in lock"
};

void SingleLockMenu::menu()
{
    int i = 0;
    for (auto const& opt : SingleLockMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}
