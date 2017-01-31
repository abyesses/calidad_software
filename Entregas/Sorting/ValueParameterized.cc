#include "gtest/gtest.h"
#include "Sort.hpp"
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"
#include "InsertionSort.hpp"
#include "ShellSort.hpp"
#include "ExchangeSort.hpp"

typedef Sort* factoryMethod();

Sort* Bubble()
{
    return new BubbleSort();
}

Sort* Selection()
{
    return new SelectionSort();
}
Sort* Insertion()
{
    return new InsertionSort();
}
Sort* Shell()
{
    return new ShellSort();
}
Sort* Exchange()
{
    return new ExchangeSort();
}
class Fixture : public testing::TestWithParam<factoryMethod *>
{
protected:
    Sort * instance2Test;
    std::vector<int> * unsorted = new std::vector<int>();
    std::vector<int> * sorted = new std::vector<int>();
public:
    void SetUp()
    {
        instance2Test = (*GetParam())();
        srand(time(NULL));
        int random_num;
        for(int i = 0; i < 20;i++){
            random_num = (int)rand()%30;
            this->unsorted->push_back(random_num);
        }      
    }
    void TearDown()
    {
        delete instance2Test;
        instance2Test = NULL;
    }
};

TEST_P(Fixture, SortASC)
{
    this->sorted = this->instance2Test->sort(this->unsorted,1);
    for(int i = 0; i < this->sorted->size()-1;i++)
    EXPECT_LE(this->sorted->at(i),this->sorted->at(i+1));
}
TEST_P(Fixture, SortDESC)
{
    this->sorted = this->instance2Test->sort(this->unsorted,2);
    for(int i = 0; i < this->sorted->size()-1;i++)
    EXPECT_LE(this->sorted->at(i+1),this->sorted->at(i));
}

INSTANTIATE_TEST_CASE_P(CaseName, Fixture, testing::Values(&Bubble, &Selection,&Insertion,&Shell,&Exchange));