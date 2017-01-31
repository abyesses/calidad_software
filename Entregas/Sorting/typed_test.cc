//
//  typed_test.cpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/24/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "gtest/gtest.h"
#include "Sort.hpp"
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"
#include "InsertionSort.hpp"
#include "ShellSort.hpp"
#include "ExchangeSort.hpp"

template<class instanceType>
class FixTyped : public testing::Test
{
public:

    FixTyped()
    {
    	instance2Test = new instanceType;
        srand(time(NULL));
        int random_num;
        for(int i = 0; i < 20;i++){
            random_num = (int)rand()%30;
            this->unsorted->push_back(random_num);
        }
       
    }
    ~FixTyped()
    {
         delete instance2Test;
        instance2Test = NULL;
    }
protected:
    std::vector<int> * unsorted = new std::vector<int>();
    std::vector<int> * sorted = new std::vector<int>();
    Sort* instance2Test;

};

typedef testing::Types<BubbleSort,ShellSort,InsertionSort,SelectionSort,ExchangeSort> implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(FixTyped, SortDESC)
{
	this->sorted = this->instance2Test->sort(this->unsorted,2);
	for(int i = 0; i < this->sorted->size()-1;i++)
	EXPECT_LE(this->sorted->at(i+1),this->sorted->at(i));
	
}
TYPED_TEST(FixTyped, SortASC)
{
	this->sorted = this->instance2Test->sort(this->unsorted,1);
	for(int i = 0; i < this->sorted->size()-1;i++)
	EXPECT_LE(this->sorted->at(i),this->sorted->at(i+1));
}
