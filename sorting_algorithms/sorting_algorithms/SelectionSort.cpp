//
//  SelectionSort.cpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/29/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "SelectionSort.hpp"
vector<int> *  SelectionSort::sort(vector <int> * unsorted,int type)
{
    vector<int> * sorted = new vector<int>(unsorted->size());
    for(int k = 0;k < unsorted->size();k++){
        sorted->at(k) = unsorted->at(k);
    }
    int i, j, first, temp;
    for (i= (int) sorted->size() - 1; i > 0; i--)
    {
        first = 0;                 // initialize to subscript of first element
        for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.
        {
            if(type == 1){
                if (sorted->at(j) > sorted->at(first))
                    first = j;
            }
            else if (type==2){
                if (sorted->at(j) < sorted->at(first))
                    first = j;
            }
        }
        temp = sorted->at(first);   // Swap smallest found with element in position i.
        sorted->at(first) = sorted->at(i);
        sorted->at(i) = temp;
    }
    return sorted;
}
