#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <new>

using namespace std;

struct fruta{
    string cor;
    string nome;
};


int main(){

    //Criando um ponteiro para o struct criado

    fruta *primeiraFruta = new fruta;

    //Modificando valores

    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    //Exibindo Valores
    cout << "Fruta: " << primeiraFruta->nome << ", Cor: " << primeiraFruta->cor;

    //Criando uma lista de frutas
    fruta *ponteiroListaFrutas = new fruta[3];

    //Modificando valores
    ponteiroListaFrutas[0].cor = "Vermelho";
    ponteiroListaFrutas[0].nome = "Morango";
    ponteiroListaFrutas[1].cor = "Verde";
    ponteiroListaFrutas[1].nome = "Abacate";
    ponteiroListaFrutas[2].cor = "Amarelo";
    ponteiroListaFrutas[2].nome = "Melão";

    //Percorrendo e exibindo
    int cont;
    for(cont = 0; cont < 3; cont++){
        cout << "Fruta: " << ponteiroListaFrutas[cont].nome << ", Cor: " << ponteiroListaFrutas[cont].cor;
    }
return 0;
}
