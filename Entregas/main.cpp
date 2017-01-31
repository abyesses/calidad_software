//
//  main.cpp
//  Cesar_cipher
//
//  Created by Abraham Esses on 1/17/17.
//  Copyright © 2017 Abraham Esses. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cesar{
public:
    string cifrar(string,int n);
    string descifrar(string,int n);
    string decode();

};
string Cesar::cifrar(string word, int n){
    string cifrada;
    int i = 0;
    int caracter;
    while(word[i] != '\0'){
        caracter = (int)word[i] - 97;
        cifrada[i] = (char)(caracter + n % 26)+97;
        //cout<<cifrada[i]<<endl;
        i++;
    }
    return cifrada;
    
}
string Cesar::descifrar(string word, int n){
    string cifrada;
    int i = 0;
    int caracter;
    while(word[i] != '\0'){
        caracter = ((int)word[i])-65;
        cifrada[i] = (char)(caracter - n % 25)+65;
        i++;
    }

    return cifrada;
    
}
string Cesar::decode(){
    string line;
    string line_dic;
    string result;
    ifstream dic_file ("diccionario.txt");
    ifstream enc_file("encriptado.txt");
    int n;
    if (enc_file.is_open())
    {
        n = 1;
        while ( getline (enc_file,line) )
        {
            cout<<"linea "<<n<<": "<< line <<endl;
          result = this->descifrar(line,n);
          if(dic_file.is_open()){
             while ( getline (dic_file,line_dic))
             {
                if (result == line_dic){
                    cout<<"Resultado:"<<result<<endl;
                }

             }
          }
          cout << line << '\n';
          n++;
        }
    enc_file.close();
    dic_file.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
int main(int argc, const char * argv[]) {
    Cesar a;
    a.decode();
    return 0;
}
