//
//  almacen.cpp
//  almacen_test
//
//  Created by Abraham Esses on 1/13/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include "almacen.hpp"

Almacen::Almacen(int n){
    std::vector<int> vector(n);
    capacidad = 10;
}
void Almacen::add(int pos,int value){
    if(pos == 1)
        queue.insert(queue.begin(), value);
    else
        queue.insert(queue.end(), value);
}
bool Almacen::empty_q(){
    return queue.empty();
}
size_t Almacen::size(){
    return queue.size();
}
int Almacen::getCapacity(){
	return capacidad;
}


