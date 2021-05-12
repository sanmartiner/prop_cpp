#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){
    //Criação ponteiro auxiliar
    int *aux;

    //Alocação dinâmica de memória
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posição de memória do vetor alocado.
    return aux;
}

int main(){

    //Define variaveis

    int *vetor, tamanho, cont;

    //Lendo o tamanho do vetor pelo usuario
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereço de memória que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    //Imprimir valores de voteres

    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = 90;
    }
    for(cont = 0; cont < tamanho; cont++){
        printf("Vetor %d: %d\n",cont, vetor[cont]);
    }

    free(vetor);
return 0;
}
