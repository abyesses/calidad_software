//
//  BubbleSort.hpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/24/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include <stdio.h>
#include "Sort.hpp"
class BubbleSort:public Sort{
public:
    vector<int> *  sort(vector<int> * unsorted,int type);
};

#endif /* BubbleSort_hpp */
