//
//  main.cpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 10/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "./factories/MutexLockFactory/MutexLockFactory.hpp"
#include "./MutexLockApp.cpp"
#include <vector>
#include <iostream>

int main(int argc, const char * argv[]) {
    
//    Thread * thread = MutexLockFactory::createThread();
//    Lock * lock = MutexLockFactory::createLock();
    new MutexLockApp();
    
    return 0;

}
