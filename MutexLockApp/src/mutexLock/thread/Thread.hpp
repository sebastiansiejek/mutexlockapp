//
//  Thread.hpp
//  MutexLockApp
//
//  Created by Sebastian Siejek on 17/12/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef Thread_hpp
#define Thread_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Thread.hpp"
//#include "../lock/Lock.hpp"
#include "../../mutexLock/mutexLock.hpp"

class Thread : public MutexLock
{
private:
    std::string _name;
public:
    Thread(std::string);
    std::string getName() override;
};

#endif /* Thread_hpp */
