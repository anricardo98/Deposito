#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "produtos.hpp"
#include "Duravel.hpp"

void Duravel::setDomi (string a){
    dominante = a;
}
void Duravel::setDura (string a){
    durabilidade = a;
}

string Duravel::getDomi (){
    return dominante;
}

string Duravel::getDura(){
    return durabilidade;
}
