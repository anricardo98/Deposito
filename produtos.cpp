#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

#include "produtos.hpp"


void Produtos::setNome (string a){
    nome = a;
}
void Produtos::setMarca (string a){
    marca = a;
}
void Produtos::setDescricao (string a){
    descricao = a;
}

void Produtos::setData (string a){
    data = a;
}
void Produtos::setPreco (int a){
    preco = a;
}
string Produtos::getNome (){
    return nome;
}
string Produtos::getMarca(){
    return marca;
}
string Produtos::getDescricao(){
    return descricao;
}
string Produtos::getData(){
    return data;
}
int Produtos::getPreco(){
    return preco;
}
