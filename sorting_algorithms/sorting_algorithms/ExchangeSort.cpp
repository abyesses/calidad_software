//
//  ExchangeSort.cpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/29/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "ExchangeSort.hpp"
vector<int> * ExchangeSort::sort(vector <int> * unsorted, int type)
{
    vector<int> * sorted = new vector<int>(unsorted->size());
    for(int k = 0;k < unsorted->size();k++){
        sorted->at(k) = unsorted->at(k);
    }
    int i, j;
    int temp;   // holding variable
    int sortedLength = (int) sorted->size();
    for (i=0; i< (sortedLength -1); i++)    // element to be compared
    {
        for(j = (i+1); j < sortedLength; j++)   // rest of the elements
        {
            if(type == 1){
                if (sorted->at(i) > sorted->at(j))          // descending order
                {
                    temp= sorted->at(i);          // swap
                    sorted->at(i) = sorted->at(j);
                    sorted->at(j) = temp;
                }

            }
            else if(type == 2){
                if (sorted->at(i) < sorted->at(j))          // descending order
                {
                    temp= sorted->at(i);          // swap
                    sorted->at(i) = sorted->at(j);
                    sorted->at(j) = temp;
                }
                
            }
        }
    }
    return sorted;
}
