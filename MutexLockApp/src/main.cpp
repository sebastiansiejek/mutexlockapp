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

        if(lockVec.size() > 0)
        {
            std::cout << "[3] Display locks\n";
        }
        if(threadLock.size() > 0)
        {
            std::cout << "[4] Display t-=0p978hreads\n";
        }
        
        std::cout << "numer: ";
        std::cin >> switcher;
        
        switch (switcher) {
            case 1:
                lockVec.push_back(new Lock("Lock 1"));
                break;
            case 2:
                threadLock.push_back(new Thread());
                break;
            default:
                break;
        }
        
    }
    
    return 0;

}
