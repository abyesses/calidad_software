//
//  main.cpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/24/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include <iostream>
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"
#include "InsertionSort.hpp"
#include "ShellSort.hpp"
#include "ExchangeSort.hpp"
#include <time.h>

int main(int argc, const char * argv[]) {
    vector<int> * unsorted = new vector<int>();
    vector<int> * sorted_a = new vector<int>();
    vector<int> * sorted_s = new vector<int>();
    vector<int> * sorted_i = new vector<int>();
    vector<int> * sorted_sh = new vector<int>();
    vector<int> * sorted_ex = new vector<int>();
    srand(time(NULL));
    BubbleSort * a = new BubbleSort();
    SelectionSort * s = new SelectionSort();
    InsertionSort * i = new InsertionSort();
    ShellSort * sh = new ShellSort();
    ExchangeSort * ex = new ExchangeSort();
    int random_num;
    for(int i = 0; i < vect_tam;i++){
        random_num = (int)rand()%30;
        unsorted->push_back(random_num);
        
    }
    sorted_a = a->sort(unsorted, 1);
    sorted_s = s->sort(unsorted, 1);
    sorted_i = i->sort(unsorted, 1);
    sorted_sh = sh->sort(unsorted, 1);
    sorted_ex = ex->sort(unsorted, 1);
    
    //cout<<sorted->size()<<endl;
    
        for(int a=0;a<5;a++){
            cout<<"Ordenados con el algoritmo "<<a<<endl;
            for (int j = 0; j< unsorted->size(); j++) {
                switch (a) {
                    case 0:
                        cout<<sorted_a->at(j)<<endl;
                        break;
                    case 1:
                        cout<<sorted_s->at(j)<<endl;
                        break;
                    case 2:
                        cout<<sorted_i->at(j)<<endl;
                        break;
                    case 3:
                        cout<<sorted_sh->at(j)<<endl;
                        break;
                    case 4:
                        cout<<sorted_sh->at(j)<<endl;
                        break;
                    default:
                        break;
                }
            }
    }
    return 0;
}
