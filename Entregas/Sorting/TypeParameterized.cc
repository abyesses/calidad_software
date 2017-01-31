#include "gtest/gtest.h"
#include "Sort.hpp"
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"
#include "InsertionSort.hpp"
#include "ShellSort.hpp"
#include "ExchangeSort.hpp"
template<class instanceType>
class TypeParameterized : public testing::Test
{
public:
    TypeParameterized()
    {
        instance2Test = new instanceType;
        srand(time(NULL));
        int random_num;
        for(int i = 0; i < 20;i++){
            random_num = (int)rand()%30;
            this->unsorted->push_back(random_num);
        }
    }
    ~TypeParameterized()
    { 
        delete instance2Test;
        instance2Test = NULL;
    }
protected:
    std::vector<int> * unsorted = new std::vector<int>();
    std::vector<int> * sorted = new std::vector<int>();
    Sort* instance2Test;
};

TYPED_TEST_CASE_P(TypeParameterized);

TYPED_TEST_P(TypeParameterized, SortASC)
{
    this->sorted = this->instance2Test->sort(this->unsorted,1);
    for(int i = 0;i<this->sorted->size()-1;i++)
        // std::cout<<this->sorted->at(i)<<" "<<this->sorted->at(i+1)<<std::endl;
        EXPECT_LE(this->sorted->at(i),this->sorted->at(i+1));
}

TYPED_TEST_P(TypeParameterized, SortDSC)
{
    this->sorted = this->instance2Test->sort(this->unsorted,2);
    for(int i = 0;i<this->sorted->size()-1;i++)
        EXPECT_LE(this->sorted->at(i+1),this->sorted->at(i));
}

REGISTER_TYPED_TEST_CASE_P(TypeParameterized, SortASC, SortDSC);


typedef testing::Types<BubbleSort,ShellSort,InsertionSort,SelectionSort,ExchangeSort> implementations;

INSTANTIATE_TYPED_TEST_CASE_P(MiTest, TypeParameterized, implementations);

