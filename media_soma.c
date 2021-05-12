#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    int a, b, c, cont;

    setlocale(LC_ALL, "");

    printf("\n Entre com o número A: ");
    scanf("%d", &a);

    printf("\n Entre com o número B: ");
    scanf("%d", &b);

    printf("\n Entre com o número de C: ");
    scanf("%d", &c);

    int soma = a + b + c;
    float media = soma/3;

    // printf("\n A soma de A, B e C é: %d", soma);
    // printf("\n A média de A, B e C é: %f", media);


    printf("\n Selecione uma das opções:  \n 1 - Imprimir a soma dos numeros. \n 2 - Imprimir a média dos números");
    scanf("%d", cont);

    switch(cont){
        case 1:
            printf("\n A soma de A, B e C é: %d", soma);
            break;
        case 2:
            printf("\n A média de A, B e C é: %f", media);
            break;
        default:
            printf("\n Fim do programa.");
        }

    system("pause");
}
