//
//  main.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 10/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include <iostream>
#include "lock/Lock.hpp"

int main(int argc, const char * argv[]) {
    
    new Lock("test");
    return 0;
}
