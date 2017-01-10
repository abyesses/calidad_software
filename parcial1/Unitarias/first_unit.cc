#include "first.h"
#include "gtest/gtest.h"
//ASSERTS --> FATALES
//EXPECT --> NO FATALES
//SOCK TEST -->
TEST(Factorial,positivos)
{
    ASSERT_EQ(1,factorial(1));
    ASSERT_EQ(121,factorial(5));	
}
TEST(Factorial,negativos)
{
   ASSERT_EQ(1,factorial(0)); 
   ASSERT_EQ(1,factorial(-3));
   ASSERT_EQ(1,factorial(-1));
}
