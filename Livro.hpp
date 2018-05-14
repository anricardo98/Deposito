#ifndef LIVRO_HPP
#define LIVRO_HPP
#include "produtos.hpp"
#include "Duravel.hpp"

class Livro : public Duravel{
    protected:
        int paginas;
        string autor;
    public:
        void setPaginas (int a);
        void setAutor (string a);
        int getPaginas ();
        string getAutor();
};

void Livro::setPaginas (int a){
    paginas = a;
}

void Livro::setAutor (string a){
    autor = a;
}

int Livro::getPaginas (){
    return paginas;
}

string Livro::getAutor(){
    return autor;
}

#endif
