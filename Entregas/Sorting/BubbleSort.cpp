//
//  BubbleSort.cpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/24/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "BubbleSort.hpp"
vector<int> *  BubbleSort::sort(vector<int> * unsorted,int type){
int temp;
vector<int> * sorted = new vector<int>(unsorted->size());
    for(int k = 0;k < unsorted->size();k++){
        sorted->at(k) = unsorted->at(k);
    }
for(int i = 0; i < sorted->size();i++){
    for(int j=0; j<sorted->size()-1;j++){
        if(type==1)//ASC
        {
            if(sorted->at(j+1) < sorted->at(j)){
                temp = sorted->at(j);
                sorted->at(j) = sorted->at(j+1);
                sorted->at(j+1) = temp;
            }
        }
        else if (type==2){ //DESC
            if(sorted->at(j+1) > sorted->at(j)){
                temp = sorted->at(j);
                sorted->at(j) = sorted->at(j+1);
                sorted->at(j+1) = temp;
            }
        }
    }
}
    return sorted;
}
