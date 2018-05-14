#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

#include "produtos.hpp"
#include "Duravel.hpp"
#include "Livro.hpp"

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
