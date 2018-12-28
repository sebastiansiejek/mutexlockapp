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

void Menu::lockMenu()
{
    std::cout <<
        "[1] Create Lock \n"
        "[2] Display locks \n"
    ;
}

void Menu::lockMenuOptions(int option, MutexLockStore* store)
{
    switch (option) {
        case 1:
            MutexLockStore::addLockToStore(MutexLockFactory::createLock(), store);
            break;
        case 2:
            std::cout << "Locks: \n";
            for (int i=0; i<=store->lockStore.size() - 1; i++) {
                std::cout << i+1 << ". " << store->lockStore[i].getName() << std::endl;
            }
            break;
        default:
            break;
    }
}

void Menu::selectOption(int option, MutexLockStore* store)
{
    switch (option) {
        case 1:
            Menu::lockMenu();
            std::cout << "Select option: ";
            std::cin >> option;
            Menu::lockMenuOptions(option, store);
            break;
        default:
            break;
    }
}
