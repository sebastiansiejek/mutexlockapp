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
#include "../lock/Lock.hpp"
#include "../thread/Thread.hpp"

struct test{
    std::vector<Lock*> locksVec;
};
class Menu
{
private:
    int selectedOption;
    std::vector<Lock*> locksVec;
public:
//    int virtual pure() = 0;
    void displayMenu();
};

#endif /* Menu_hpp */
