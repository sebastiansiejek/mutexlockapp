//
//  LockMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "LockMenu.hpp"

std::list<std::string> LockMenu::menuOptions = {
    "Create lock", "Display locks", "Select lock"
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

void LockMenu::selectLock()
{
    LockStoreStatic::display();
    if (!LockStoreStatic::isEmpty()) {
        int selectedLockIndex = 0;
        std::cout << "Select lock (index): ";
        std::cin >> selectedLockIndex;
   
        LockStoreStatic lockStore;
        Lock* selectedLock = lockStore.find(selectedLockIndex);
        
        std::cout <<
            "You selected lock: " <<
            selectedLock->getName() <<
        std::endl;
        
        SingleLockMenu::menu();
        int option = 0;
        std::cout << "Select option: ";
        std::cin >> option;
        SingleLockMenu::options(option, selectedLock);
    }
}

void LockMenu::options(int option)
{
    switch (option) {
        case 1:
            LockStoreStatic::add(LockMenu::add());
            break;
        case 2:
            LockStoreStatic::display();
            break;
        case 3:
            LockMenu();
            break;
        default:
            break;
    }
}
