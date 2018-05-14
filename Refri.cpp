#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "produtos.hpp"
#include "Nao_duravel.hpp"
#include "Refri.hpp"

void Refri::setSabor (int a){
    sabor = a;
}

void Refri::setLitro (string a){
    litro = a;
}

int Refri::getSabor (){
    return sabor;
}

string Refri::getLitro(){
    return litro;
}
