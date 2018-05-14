#ifndef CARRO_HPP
#define CARRO_HPP
#include "produtos.hpp"
#include "Duravel.hpp"

class Carro: public Duravel{
    protected:
        string placa;
        string tipo;
    public:
        void setPlaca(string a);
        void setTipo (string a);
        string getPlaca ();
        string getTipo();
};

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

#endif
