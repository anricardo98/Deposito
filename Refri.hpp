#ifndef REFRI_HPP
#define REFRI_HPP

#include "produtos.hpp"
#include "Nao_duravel.hpp"

class Refri: public Nao_duravel{
    protected:
        string sabor;
        int litro;
    public:
        void setSabor (string a);
        void setLitro (int a);
        string getSabor ();
        int getLitro();
};

void Refri::setSabor (string a){
    sabor = a;
}

void Refri::setLitro(int a){
    litro = a;
}

string Refri::getSabor (){
    return sabor;
}

int Refri::getLitro(){
    return litro;
}

#endif
