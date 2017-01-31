//
//  Functions.cpp
//  VPT_TP
//
//  Created by Abraham Esses on 1/17/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "../typed_test/typed_test/Hierarchie.h"
#include "gtest/gtest.h"
typedef Base * factoryMethod();
Base * instanceConst(){
	return new Child1;
}
Base * instanceConst2(){
	return new Child2;
}
template <int parameter>
Base * instanceConstParam(){
	return new Child3(parameter);
}
class Fixture: public testing::TestWithParam<factoryMethod*>{
protected:
	Base * instance;
	public:
	void SetUp(){
		instance = (*GetParam())();
	}
	void TearDown(){
		delete instance;
		instance = NULL;
	}
};
TEST_P(Fixture,Name){
	this->instance->doSomething();
}
INSTANTIATE_TEST_CASE_P(CaseName,Fixture,testing::Values(&instanceConst,&instanceConst2,&instanceConstParam<10>));
