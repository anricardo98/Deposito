#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;
#include "produtos.hpp"
#include "Duravel.hpp"
#include "Carro.hpp"

void Carro::setPlaca(string a){
    placa = a;
}

void Carro::setTipo (string a){
    tipo = a;
}

string Carro::getPlaca (){
    return placa;
}

string Carro::getTipo(){
    return tipo;
}
