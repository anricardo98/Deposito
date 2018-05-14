#include <sstream>
#include<vector>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "produtos.hpp"
#include "Deposito.hpp"

Deposito::Deposito(){
    quant = 0;
}

void Deposito::adicionar(Produtos *a){
    lista.push_back(a);
    quant++;
}

void Deposito::remover(int pos){
    if (quant > pos && quant > 0){
        lista.erase(lista.begin()+pos);
        quant--;

    }

    else {
        cout << "A retirada nao é possivel" << endl;
    }
}

void Deposito::estoque(){
    cout << quant;
    }
}

void Deposito::getQuant(){
    return quant;
}

void vazio(){
    if (quant <= 0){
        cout << "Deposito esta vazio" << endl;
    }

    else {
        cout << "Deposito nao esta vazio" << endl;
    }
}

