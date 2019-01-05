//
//  ThreadsInLockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 31/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "ThreadsInLockMenu.hpp"

std::list<std::string> ThreadsInLockMenu::menuOptions = {
    "Select Thread"
};

void ThreadsInLockMenu::menu()
{
    int i = 0;
    for (auto const& opt : ThreadsInLockMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}

void ThreadsInLockMenu::options(int option)
{
    switch (option) {
        case 1:
            
        default:
            break;
    }
}
