//
//  ExchangeSort.hpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/29/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef ExchangeSort_hpp
#define ExchangeSort_hpp

#include <stdio.h>
#include "Sort.hpp"
class ExchangeSort:public Sort{
public:
    vector<int> * sort(vector<int> * unsorted,int type);
};
#endif /* ExchangeSort_hpp */
