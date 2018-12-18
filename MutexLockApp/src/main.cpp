//
//  main.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 10/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "menu/Menu.hpp"
#include <vector>
#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::vector<Lock*> lockVec;
    std::vector<Thread*> threadLock;
    
    Menu* menu = new Menu();
    int switcher = 1;
    while (switcher != 0) {
        menu->displayMenu();
        std::cout << "numer: ";
        std::cin >> switcher;
    }
    
    return 0;
}
