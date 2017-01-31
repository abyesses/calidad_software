//
//  typed_test.cpp
//  sorting_algorithms
//
//  Created by Abraham Esses on 1/24/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "gtest/gtest.h"
#include "Sort.hpp"

template<class instanceType>
class FixTyped : public testing::Test
{
public:
    FixTyped()
    {
        srand(time(NULL));
        BubbleSort a;
        int random_num;
        for(int i = 0; i < 20;i++){
            random_num = (int)rand()%30;
            unsorted.push_back(random_num);
            //cout<<"Elemento "<<i<<": "<<random_num<<endl;
        }
    }
    ~FixTyped()
    {
        delete unsorted;
    }
protected:
    vector<int>unsorted;
};

typedef testing::Types<BubbleSort> implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(FixTyped, testName)
{
    unsorted = a.sort(unsorted,1);
    for(int i = 0;i< unsorted.size();i++)
        EXPECT_LE(unsorted.at(i),unsorted.at(i+1));
}
