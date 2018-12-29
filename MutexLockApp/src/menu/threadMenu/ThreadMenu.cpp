//
//  ThreadMenu.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 28/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "ThreadMenu.hpp"

std::list<std::string> ThreadMenu::menuOptions = {
    "Create thread", "Select thread", "Display threads"
};

void ThreadMenu::menu()
{
    int i = 0;
    for (auto const& opt : ThreadMenu::menuOptions) {
        i++;
        std::cout << "[" << i << "]" << " " << opt << std::endl;
    }
    
    std::cout << "[0] Exit\n";
}


Thread* ThreadMenu::add()
{
    std::string lockName;
    std::cout << "Enter thread name: ";
    std::cin >> lockName;
    return MutexLockFactory::createThread(lockName);
}

void ThreadMenu::options(int option, MutexLockStore* store)
{
    switch (option) {
        case 1:
            store->add(ThreadMenu::add());
            break;
        case 2:
//            ThreadMenu::select(store);
            break;
        case 3:
            store->display();
            break;
        default:
            break;
    }
}

