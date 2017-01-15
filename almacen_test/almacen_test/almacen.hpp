//
//  almacen.hpp
//  almacen_test
//
//  Created by Abraham Esses on 1/13/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#ifndef almacen_hpp
#define almacen_hpp

#include <stdio.h>
#include <vector>

class Almacen{
private:
    std::vector<int> queue;
    int capacidad;
public:
    Almacen(int n);
    void add(int pos,int value);
    void delete_fq(int pos);
    bool empty_q();
    size_t size();
    int getCapacity();
};

#endif /* almacen_hpp */
