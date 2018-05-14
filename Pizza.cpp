#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "produtos.hpp"
#include "Nao_duravel.hpp"
#include "Pizza.hpp"

void Pizza::setSabor (string a){
    sabor = a;
}

void Pizza::setTamanho (string a){
    tamanho = a;
}

string Pizza::getSabor (){
    return sabor;
}

string Pizza::getTamanho(){
    return tamanho;
}

