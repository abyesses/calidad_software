//
//  InsertionSort.cpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/29/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "InsertionSort.hpp"
vector<int> *  InsertionSort::sort(vector <int> * unsorted,int type)
{
vector<int> * sorted = new vector<int>(unsorted->size());
    for(int k = 0;k < unsorted->size();k++){
        sorted->at(k) = unsorted->at(k);
    }
    int i, j, key;
    for(j = 1; j < sorted->size(); j++)    // Start with 1 (not 0)
    {
        key = sorted->at(j);
        if(type == 1){
            for(i = j - 1; (i >= 0) && (sorted->at(i) > key); i--)   // Smaller values move up
            {
                sorted->at(i+1) = sorted->at(i);
            }
        }
        else if (type == 2){
            for(i = j - 1; (i >= 0) && (sorted->at(i) < key); i--)   // Smaller values move up
            {
                sorted->at(i+1) = sorted->at(i);
            }
        }
        sorted->at(i+1) = key;    //Put key into its proper location
    }
    return sorted;
}
