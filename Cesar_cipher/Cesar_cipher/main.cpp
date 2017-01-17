//
//  main.cpp
//  Cesar_cipher
//
//  Created by Abraham Esses on 1/17/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//

#include <iostream>
class Cesar{
public:
    std::string cifrar(std::string,int n);
    std::string descifrar(std::string,int n);

};
std::string Cesar::cifrar(std::string word, int n){
    std::string cifrada;
    int i = 0;
    int caracter;
    while(word[i] != '\0'){
        caracter = (int)word[i] - 97;
        cifrada[i] = (char)(caracter + n % 26)+97;
        //std::cout<<cifrada[i]<<std::endl;
        i++;
    }
    return cifrada;
    
}
std::string Cesar::descifrar(std::string word, int n){
    std::string cifrada;
    int i = 0;
    int caracter;
    while(word[i] != '\0'){
        caracter = ((int)word[i])-65;
        cifrada[i] = (char)(caracter - n % 25)+65;
        i++;
    }
    return cifrada;
    
}
int main(int argc, const char * argv[]) {
    Cesar a;
    std::string x = "RLCOPY";
    for(int i = 1;i<= 20;i++){
        std::cout<<i<<" "<<a.descifrar(x, i).c_str()<<std::endl;
    }
    return 0;
}
