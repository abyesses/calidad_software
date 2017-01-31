//
//  SelectionSort.hpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/29/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef SelectionSort_hpp
#define SelectionSort_hpp

#include <stdio.h>
#include "Sort.hpp"
class SelectionSort:public Sort{
public:
    vector<int> * sort(vector<int> * unsorted,int type);
};

#endif /* SelectionSort_hpp */
