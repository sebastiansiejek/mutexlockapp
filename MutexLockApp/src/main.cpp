//
//  main.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 10/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "menu/Menu.hpp"
#include "./../factories/MutexLockFactory/MutexLockFactory.hpp"
#include <vector>
#include <iostream>

int main(int argc, const char * argv[]) {
    
    Thread * thread = MutexLockFactory::createThread();
    Lock * lock = MutexLockFactory::createLock();
    
    return 0;

}
