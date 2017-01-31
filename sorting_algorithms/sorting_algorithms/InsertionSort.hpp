//
//  InsertionSort.hpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/29/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef InsertionSort_hpp
#define InsertionSort_hpp

#include <stdio.h>
#include "Sort.hpp"
class InsertionSort:public Sort{
public:
    vector<int> *  sort(vector<int> * unsorted,int type);
};

#endif /* InsertionSort_hpp */
