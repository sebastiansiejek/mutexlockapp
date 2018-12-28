//
//  Menu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "Menu.hpp"

std::list<std::string> Menu::menuOptions = {
    "Lock", "Thread"
};

void Menu::displayMenu()
{
    int i = 0;
    for (auto const& opt : Menu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
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
