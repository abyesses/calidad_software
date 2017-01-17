//
//  Functions.hpp
//  VPT_TP
//
//  Created by Abraham Esses on 1/17/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef Functions_hpp
#define Functions_hpp

#include <stdio.h>
template <class T>
bool isEven(T value){
    if(value%2 == 0)
        return true;
    return false;
}
template <class T>
bool isOdd(T value){
    if(value%2 != 0)
        return true;
    return false;
}

#endif /* Functions_hpp */
