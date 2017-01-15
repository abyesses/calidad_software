//
//  almacen_test.cpp
//  almacen_test
//
//  Created by Abraham Esses on 1/13/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "gtest/gtest.h"
#include "almacen.hpp"
#include <time.h>
class Time: public testing::Test{
public:
    virtual void SetUp(){
    	
    	timer = time(NULL);
    }
   virtual void TearDown(){
    	EXPECT_TRUE((time(NULL)-timer)<=10)<<"ERROR";
    }
    private:
 	time_t timer;
};
class AlmacenFixture: public  Time{
public:
    void SetUp(){
    	Time::SetUp();
    }
    void TearDown(){
    	Time::TearDown();
    
    }
    static void SetUpTestCase(){
    	a = new Almacen(10);
    	sleep(11);
    }
    static void TearDownTestCase(){
    	delete a;
    }

     static Almacen *a; 


};

Almacen * AlmacenFixture::a = 0;
//TEST_F(Caso de prueba,test_name)
TEST_F(AlmacenFixture,test){
    ASSERT_EQ(10,a->getCapacity());
}
