#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){

    //Criar objeto do arquivo
    fstream meuArquivo;

    //Abrir o arquivo
    meuArquivo.open("Teste.txt");

    //Limpar o arquivo
    meuArquivo << "";

    //FecharArquivo
    meuArquivo.close();

return 0;

}
