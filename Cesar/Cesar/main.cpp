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
    int caracter,caracter_dest;
    while(word[i] != '\0'){
        caracter = (int)word[i];
        caracter_dest = (caracter + n % 27);
        if(caracter_dest > 90){caracter_dest = caracter_dest-90 +64;}
        cifrada[i] = (char)caracter_dest;
        //cout<<cifrada[i]<<endl;
        i++;
    }
    return cifrada;
    
}
string Cesar::descifrar(string word, int n){
    string cifrada;
    int i = 0;
    int caracter,caracter_dest;
    while(word[i] != '\0'){
        caracter = (int)word[i];
        caracter_dest = (caracter - n % 27);
        if(caracter_dest < 65){caracter_dest = caracter_dest+26;}
        cifrada[i] = (char)caracter_dest;
        //cout<<cifrada[i]<<endl;
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
    string x = "RLCOPY";
    string y;
    y = a.descifrar(x,11);
    if(y.compare("GARDEN")){cout<<"Todo OK"<<endl;}else{cout<<"Son diferentes"<<endl;}
    return 0;
}
