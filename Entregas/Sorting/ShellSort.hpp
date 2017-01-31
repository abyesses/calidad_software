//
//  ShellSort.hpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/29/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef ShellSort_hpp
#define ShellSort_hpp

#include <stdio.h>
#include "Sort.hpp"
class ShellSort:public Sort{
public:
    vector<int> *  sort(vector<int> * unsorted,int type);
};

#endif /* ShellSort_hpp */
