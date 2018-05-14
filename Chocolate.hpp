#ifndef CHOCOLATE_HPP
#define CHOCOLATE_HPP
#include "produtos.hpp"
#include "Nao_duravel.hpp"

class Chocolate: public Nao_duravel{
    protected:
       string sabor;
       int peso;
    public:
        void setSabor (string a);
        void setPeso (int a);
        int getPeso ();
        string getSabor();
};

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

#endif
