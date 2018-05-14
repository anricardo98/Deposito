#ifndef PIZZA_HPP
#define PIZZA_HPP
#include "produtos.hpp"
#include "Nao_duravel.hpp"


class Pizza: public Nao_duravel{
    protected:
        string sabor;
        string tamanho;
    public:
        void setSabor (string a);
        void setTamanho (string a);
        string getSabor ();
        string getTamanho();
};

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


#endif
