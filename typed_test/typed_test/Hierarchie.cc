//
//  Hierarchie.cpp
//  typed_test
//
//  Created by Abraham Esses on 1/20/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "Hierarchie.h"
#include "gtest/gtest.h"
template <class T>
class TypeTestFixture: public testing::Test{
public:
    TypeTestFixture(){
        instanceTest = new T;
    }
    ~TypeTestFixture()}{ delete instanceTest;instanceTest=NULL;}
protected:
    Base * instanceTest;
    
};
typedef testing::Types<Child1,Child2> implementations;
TYPED_TEST_CASE(TypeTestFixture,implementations);
TYPED_TEST(TypeTestFixture,typeTest1){
	EXPECT_EQ(1,this->instanceTest->doSomething());
}