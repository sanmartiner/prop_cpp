#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    //Cursor que ir� percorrer cada letra

    //Declara��o variavel, c
    int c, cont;
    char conteudoTexto[255];

    //Declara��o do ponteiro tipo File.
    FILE *file;

    //Abre o arquivo no diret�rio escolhido com o parametro fopen.
    file = fopen("Texto.txt", "r");

    //Se o arquivo for encontrado;
    if(file){
            //Enquanto encontrar letras at� o final do arquivo EOF.
            while((c = getc(file)) != EOF){
                //Imprime na tela
                printf("%c",c);
                //Passa o conteudo do arquivo para o vetor
                conteudoTexto[cont] = c;
                cont++;

                }
                fclose(file);
            }

    //Percorrer o vetor de caracteres que recebeu os valores do arquivo.

    for(cont = 0; cont < strlen(conteudoTexto)- 1 ; cont++){
        printf("%c", conteudoTexto[cont]);
    }


//Retorno da fun��o
return 0;
}
