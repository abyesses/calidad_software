//
//  Hierarchie.hpp
//  typed_test
//
//  Created by Abraham Esses on 1/20/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef Hierarchie_hpp
#define Hierarchie_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Base{
public:
    virtual int doSomething() = 0;
};
class Child1:public Base{
    public:
    int doSomething(){
        cout<<"Hijo 1";
        return 1;
    }
};
class Child2:public Base{

public:
    int doSomething(){
        cout<<"Hijo 2";
        return 1;
    }
};
class Child3:public Base{
    int value;
public:
    Child3(int value): value(value){}

    int doSomething(){
        cout<<"Hijo 3 con valor "<<value<<endl;
        return 1;
    }
};
#endif /* Hierarchie_hpp */
