#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    //Cursor que irá percorrer cada letra

    //Declaração variavel, c
    int c, cont;
    char conteudoTexto[255];

    //Declaração do ponteiro tipo File.
    FILE *file;

    //Abre o arquivo no diretório escolhido com o parametro fopen.
    file = fopen("Texto.txt", "r");

    //Se o arquivo for encontrado;
    if(file){
            //Enquanto encontrar letras até o final do arquivo EOF.
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


//Retorno da função
return 0;
}
