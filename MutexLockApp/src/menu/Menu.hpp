//
//  Menu.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

class Menu
{
private:
    int selectedOption;
public:
//    int virtual pure() = 0;
    static void displayMenu();
};

#endif /* Menu_hpp */
