//
//  Sort.hpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/24/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp
#define vect_tam 20
#include <stdio.h>
#include <vector>
#include <time.h>
using namespace std;
class Sort{
protected:
    //vector<int> * unsorted = new vector<int>(vect_tam);
    public:
    virtual vector<int>* sort(vector<int>*,int)=0;
};
#endif /* Sort_hpp */
