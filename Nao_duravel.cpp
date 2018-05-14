#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "produtos.hpp"
#include "Nao_duravel.hpp"

void Nao_duravel::setVali (string a){
    validade = a;
}

void Nao_duravel::setGenero (string a){
    genero = a;
}

string Nao_duravel::getVali (){
    return validade;
}

string Nao_duravel::getGenero(){
    return genero;
}
