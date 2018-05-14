#ifndef NAO_DURAVEL_HPP
#define NAO_DURAVEL_HPP
#include "produtos.hpp"

class Nao_duravel : public Produtos{
    protected:
        string validade;
        string genero;
    public:
        void setVali (string a);
        void setGenero (string a);
        string getVali ();
        string getGenero();
};

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


#endif
