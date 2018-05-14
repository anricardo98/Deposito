#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "produtos.hpp"
#include "Duravel.hpp"
#include "Celular.hpp"

class Celular : public Produtos, public Duravel{
    protected:
        int numero;
    public:
        int getNumero();
        void setNumero(int a);
};

int Celular::getNumero(){
    return numero;
}

void Celular::setNumero(int a){
    numero = a;
}
