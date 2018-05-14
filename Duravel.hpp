#ifndef DURAVEL_HPP
#define DURAVEL_HPP
#include "produtos.hpp"


class Duravel : public Produtos {
    protected:
        string dominante;
        string durabilidade;
    public:
        void setDomi (string a);
        void setDura (string a);
        string getDomi ();
        string getDura();

};

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

#endif
