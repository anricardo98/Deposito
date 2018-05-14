#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "produtos.hpp"
#include "Nao_duravel.hpp"
#include "Chocolate.hpp"

void Chocolate::setSabor (string a){
    sabor = a;
}

void Chocolate::setPeso (int a){
    peso = a;
}

int Chocolate::getPeso (){
    return peso;
}

string Chocolate::getSabor(){
    return sabor;
}
