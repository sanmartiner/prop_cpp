#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){

    //Setar qual arquivo será lido
    ifstream input("Nomearquivo.txt");

    //String que recebera o texto lido
    string textoLido;

    //Passa o conteudo do texto lido para a String;
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //MostrarConteudo
    cout << textoLido;

return 0;
}
