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

void LockMenu::selectLock(MutexLockStore* store)
{
    store->display();
    if (!store->isEmpty()) {
        int selectedLockIndex = 0;
        std::cout << "Select lock (index): ";
        std::cin >> selectedLockIndex;
        LockStore *lock = dynamic_cast<LockStore*>(store);
        
        int option = 0;
        Lock* selectedLock = lock->find(selectedLockIndex);
        
        std::cout <<
            "You selected lock: " <<
            selectedLock->getName() <<
        std::endl;
        
        SingleLockMenu::menu();
        std::cout << "Select option: ";
        std::cin >> option;
        switch (option) {
            case 1:
                if(selectedLock->getThreadsInLock().size() > 0) {
                    std::cout << "Threads in lock: \n";
                    selectedLock->displayThreadsInLock();
                } else {
                    std::cout << "Lock " << selectedLock->getName() << " has NOT threads ";
                }
                
                break;
                
            default:
                break;
        }
    }
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
        case 3:
            LockMenu::selectLock(store);
            break;
        default:
            break;
    }
}
