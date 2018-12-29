//
//  LockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "LockMenu.hpp"

std::list<std::string> LockMenu::menuOptions = {
    "Create lock", "Display locks"
};

void LockMenu::menu()
{
    int i = 0;
    for (auto const& opt : LockMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}

Lock* LockMenu::add()
{
    std::string lockName;
    std::cout << "Enter lock name: ";
    std::cin >> lockName;
    return MutexLockFactory::createLock(lockName);
}

void LockMenu::options(int option, MutexLockStore* store)
{
    switch (option) {
        case 1:
            store->add(LockMenu::add());
            break;
        case 2:
            store->display();
            break;
        default:
            break;
    }
}
