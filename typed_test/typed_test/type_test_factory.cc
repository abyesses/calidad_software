#include "Hierarchie.h"
#include "gtest/gtest.h"
template <class T>
Base * factoryMethod(){
	return new T;
}
template <>
Base * factoryMethod<Child3>(){
		return new Child3(10);
}
template <class T>
class TypeTestFixtureConst: public testing::Test{
protected:
    Base * instanceTest;
public:
	TypeTestFixtureConst() : instanceTest(factoryMethod<T>()){}
	 ~TypeTestFixtureConst(){ delete instanceTest; instanceTest=NULL;}  
};
typedef testing::Types<Child1,Child2,Child3> implementations;
TYPED_TEST_CASE(TypeTestFixtureConst,implementations);
TYPED_TEST(TypeTestFixtureConst,typeTest2){
	EXPECT_EQ(1,this->instanceTest->doSomething());
}