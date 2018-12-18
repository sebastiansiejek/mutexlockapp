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
#include "../lock/Lock.hpp"
#include "../thread/Thread.hpp"

class Menu
{
private:
    int selectedOption;
public:
//    int virtual pure() = 0;
    void displayMenu();
    int selectOption(int);
    Lock* factory();
};

#endif /* Menu_hpp */
