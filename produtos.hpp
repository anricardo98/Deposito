#ifndef PRODUTOS_HPP
#define PRODUTOS_HPP

class Produtos{
    protected:
        string nome;
        int preco;
        string marca;
        string descricao;
        string data;
    public:
        void setNome (string a);
        void setMarca (string a);
        void setDescricao (string a);
        void setData (string a);
        void setPreco (int a);
        string getNome ();
        string getMarca();
        string getDescricao();
        string getData();
        int getPreco();
};

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
#endif // PRODUTOS_HPP_INCLUDED
