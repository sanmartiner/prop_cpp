#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>

int main(){

    //Definir variaveis
    int  linhas = 3, colunas = 3, i, j;
    int **matriz;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    //Alocando as linhas
     matriz = (int**) new int[linhas];

    //Alocando memoria para as colunas de cada linha
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) new int[colunas];
        }

    //Preenchendo valores e exibindo a matriz
    for(i =  0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

//Retorno da fun��o
return 0;
}
