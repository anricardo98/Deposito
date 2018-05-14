#ifndef DEPOSITO_HPP
#define DEPOSITO_HPP
#include<vector>
#include "produtos.hpp"


class Deposito{
    private:
        int contador;
        int quant;
        std::vector<Produtos*> lista;
    public:
        Deposito();
        void adicionar(Produtos *a);
        void remover(int pos);
        void estoque();
        int getQuant();
        void vazio();
};

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
    cout << "Há " << quant << "produtos no estoque " << endl;
}

int Deposito::getQuant(){
    return quant;
}

void Deposito::vazio(){
    if (quant <= 0){
        cout << "Deposito esta vazio" << endl;
    }

    else {
        cout << "Deposito nao esta vazio" << endl;
    }
}



#endif
