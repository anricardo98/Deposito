#include<vector>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "produtos.hpp"
#include "Carro.hpp"
#include "Celular.hpp"
#include "Chocolate.hpp"
#include "Deposito.hpp"
#include "Duravel.hpp"
#include "Livro.hpp"
#include "Nao_duravel.hpp"
#include "Pizza.hpp"
#include "Refri.hpp"

int main(){
    int loop = 1;
    int resposta = 0;
    int produto;

    Deposito dep;

    while (loop == 1){
        cout << "O que você deseja fazer? "<< endl;
        cout << "Digite 1 se deseja adicionar um produto" << endl;
        cout << "Digite 2 se deseja retirar um produto" << endl;
        cout << "Digite 3 para verificar o estoque" <<endl;
        cout << "Digite 4 para saber se o deposito esta vazio" << endl;

        cin >> resposta;

        if (resposta == 1){
                cout << "Qual objeto você deseja adicionar?" << endl;
                cout << "Digite 1 para carro" << endl;
                cout << "Digite 2 para celular" << endl;
                cout << "Digite 3 para livro" << endl;
                cout << "Digite 4 para pizza" << endl;
                cout << "Digite 5 para chocolate" << endl;
                cout << "Digite 6 para Refrigerante" << endl;

                cin >> produto;

                if (produto == 1){ //carro
                    Carro *prod = new Carro;
                    string x;
                    int y;
                    cout << "Digite o nome do produto" << endl;
                    cin >> x;
                    prod->setNome(x);
                    cout << "Digite a marca do produto" << endl;
                    cin >> x;
                    prod->setMarca(x);
                    cout << "Digite o preco do produto" << endl;
                    cin >> y;
                    prod->setPreco(y);
                    cout << "Digite a placa do produto" << endl;
                    cin >> x;
                    prod->setPlaca(x);
                    cout << "Digite o tipo do produto, por exemplo: Corsa, Celta" << endl;
                    cin >> x;
                    prod->setTipo(x);
                    cout << "Digite o material dominante do carro" << endl;
                    cin >> x;
                    prod->setDomi(x);
                    cout << "Digite a durabilidade do produto" << endl;
                    cin >> x;
                    prod->setDura(x);
                    cout << "Digite a descricao do produto" << endl;
                    cin >> x;
                    prod->setDescricao(x);
                    dep.adicionar(prod);
                }

                else if (produto == 2){ //celular
                    Celular *prod = new Celular;
                    string x;
                    int y;
                    cout << "Digite o nome do produto" << endl;
                    cin >> x;
                    prod->setNome(x);
                    cout << "Digite a marca do produto" << endl;
                    cin >> x;
                    prod->setMarca(x);
                    cout << "Digite o preco do produto" << endl;
                    cin >> y;
                    prod->setPreco(y);
                    cout << "Digite o numero do produto" << endl;
                    cin >> y;
                    prod->setNumero(y);
                    cout << "Digite o material dominante do produto" << endl;
                    cin >> x;
                    prod->setDomi(x);
                    cout << "Digite a durabilidade do produto" << endl;
                    cin >> x;
                    prod->setDura(x);
                    cout << "Digite a descricao do produto" << endl;
                    cin >> x;
                    prod->setDescricao(x);
                    dep.adicionar(prod);
                }

                else if (produto == 3){ //livro
                    Livro *prod = new Livro;
                    string x;
                    int y;
                    cout << "Digite o titulo do produto" << endl;
                    cin >> x;
                    prod->setNome(x);
                    cout << "Digite a marca do produto" << endl;
                    cin >> x;
                    prod->setMarca(x);
                    cout << "Digite o preco do produto" << endl;
                    cin >> y;
                    prod->setPreco(y);
                    cout << "Digite o numero de paginas do produto" << endl;
                    cin >> y;
                    prod->setPaginas(y);
                    cout << "Digite o autor do produto" << endl;
                    cin >> x;
                    prod->setAutor(x);
                    cout << "Digite o material dominante do produto" << endl;
                    cin >> x;
                    prod->setDomi(x);
                    cout << "Digite a durabilidade do produto" << endl;
                    cin >> x;
                    prod->setDura(x);
                    cout << "Digite a descricao do produto" << endl;
                    cin >> x;
                    prod->setDescricao(x);
                    dep.adicionar(prod);
                }

                else if (produto == 4){ //pizza
                    Pizza *prod = new Pizza;
                    string x;
                    int y;
                    cout << "Digite o nome do produto" << endl;
                    cin >> x;
                    prod->setNome(x);
                    cout << "Digite a marca do produto" << endl;
                    cin >> x;
                    prod->setMarca(x);
                    cout << "Digite o preco do produto" << endl;
                    cin >> y;
                    prod->setPreco(y);
                    cout << "Digite o sabor do produto" << endl;
                    cin >> x;
                    prod->setSabor(x);
                    cout << "Digite o tamanho do produto" << endl;
                    cin >> x;
                    prod->setTamanho(x);
                    cout << "Digite o genero do produto" << endl;
                    cin >> x;
                    prod->setGenero(x);
                    cout << "Digite a data de validade do produto" << endl;
                    cin >> x;
                    prod->setVali(x);
                    cout << "Digite a descricao do produto" << endl;
                    cin >> x;
                    prod->setDescricao(x);
                    dep.adicionar(prod);
                }

                else if (produto == 5){ //chocolate
                    Chocolate *prod = new Chocolate;
                    string x;
                    int y;
                    cout << "Digite o nome do produto" << endl;
                    cin >> x;
                    prod->setNome(x);
                    cout << "Digite a marca do produto" << endl;
                    cin >> x;
                    prod->setMarca(x);
                    cout << "Digite o preco do produto" << endl;
                    cin >> y;
                    prod->setPreco(y);
                    cout << "Digite o sabor do produto" << endl;
                    cin >> x;
                    prod->setSabor(x);
                    cout << "Digite o peso do produto, em gramas" << endl;
                    cin >> y;
                    prod->setPeso(y);
                    cout << "Digite o genero do produto" << endl;
                    cin >> x;
                    prod->setGenero(x);
                    cout << "Digite a data de validade do produto" << endl;
                    cin >> x;
                    prod->setVali(x);
                    cout << "Digite a descricao do produto" << endl;
                    cin >> x;
                    prod->setDescricao(x);
                    dep.adicionar(prod);
                }

                else if (produto == 6){//refrigerante
                    Refri *prod = new Refri;
                    string x;
                    int y;
                    cout << "Digite o nome do produto" << endl;
                    cin >> x;
                    prod->setNome(x);
                    cout << "Digite a marca do produto" << endl;
                    cin >> x;
                    prod->setMarca(x);
                    cout << "Digite o preco do produto" << endl;
                    cin >> y;
                    prod->setPreco(y);
                    cout << "Digite o sabor do produto" << endl;
                    cin >> x;
                    prod->setSabor(x);
                    cout << "Digite o volume do produto, em mililitros" << endl;
                    cin >> y;
                    prod->setLitro(y);
                    cout << "Digite o genero do produto" << endl;
                    cin >> x;
                    prod->setGenero(x);
                    cout << "Digite a data de validade do produto" << endl;
                    cin >> x;
                    prod->setVali(x);
                    cout << "Digite a descricao do produto" << endl;
                    cin >> x;
                    prod->setDescricao(x);
                    dep.adicionar(prod);
                }

                else {
                    cout << "Indicação invalida" << endl;
                }
        }

        else if (resposta == 2){
            int pos;
            cout << "Qual a posicao dele no estoque" << endl;
            cin >> pos;

            dep.remover(pos);
        }

        else if (resposta == 3){
            dep.estoque();
        }

        else if (resposta == 4){
            dep.vazio();
        }

        else {
            cout << "Resposta Invalida";
        }

        cout << "Deseja realizar um novo processo?" << endl;
        cout << "Digite 1 para sim e qualquer outra tecla para não" << endl;
        cin >> loop;
    }


    return 0;
}



