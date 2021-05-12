#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){
    //Dfinir variaveis
    int tamanho, cont;

    // Lendo o tamanho
    printf("Difite o tamanho: ");
    scanf("%d", &tamanho);

    //Criando um ponteiro que recebe o novo vetor vazio.

    int *vetor = new int[tamanho];

    //Modificando e Imprimindo Valores

    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = cont;
        printf("\n%d", vetor[cont]);
    }
    free(vetor);
//Retorno da função
return 0;
}
