//
//  Functions.cpp
//  VPT_TP
//
//  Created by Abraham Esses on 1/17/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "Functions.h"
#include "gtest/gtest.h"

class FixValParam: public testing::TestWithParam<int>
{
    public:
    void SetUp(){
    
    }
    void TearDown(){
    
    }
    
    
};
int a[]={1,2,3,4,5,6,7,8,9,0};
//Probando pares
TEST_P(FixValParam,Test1){
    EXPECT_EQ(true,isEven(GetParam()));
}
//Probando impares
TEST_P(FixValParam,Test2){
   EXPECT_EQ(true,isOdd(GetParam()));
}
//INSTANTIATE_TEST_CASE_P(Values,FixValParam,testing::Values(2,4,6,8,10,11,12));
//INSTANTIATE_TEST_CASE_P(Values,FixValParam,testing::Range(0,40,1));
INSTANTIATE_TEST_CASE_P(Values,FixValParam,testing::ValuesIn(a));
