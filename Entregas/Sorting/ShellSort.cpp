//
//  ShellSort.cpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/29/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "ShellSort.hpp"
vector<int> *  ShellSort::sort( vector <int> * unsorted, int type)
{
    vector<int> * sorted = new vector<int>(unsorted->size());
    for(int k = 0;k < unsorted->size();k++){
        sorted->at(k) = unsorted->at(k);
    }
    int i, temp, flag = 1;
    int d = (int) sorted->size();
    while( flag || (d > 1))      // boolean flag (true when not equal to 0)
    {
        flag = 0;           // reset flag to 0 to check for future swaps
        d = (d+1) / 2;
        for (i = 0; i < (sorted->size() - d); i++)
        {
            if(type == 1){
                if (sorted->at(i + d) < sorted->at(i))
                {
                    temp = sorted->at(i + d);      // swap positions i+d and i
                    sorted->at(i + d) = sorted->at(i);
                    sorted->at(i) = temp;
                    flag = 1;                  // tells swap has occurred
                }
            }
            else if (type == 2)
            {
                if (sorted->at(i + d) > sorted->at(i))
                {
                    temp = sorted->at(i + d);      // swap positions i+d and i
                    sorted->at(i + d) = sorted->at(i);
                    sorted->at(i) = temp;
                    flag = 1;                  // tells swap has occurred
                }
            }
        }
    }
    return sorted;
}
