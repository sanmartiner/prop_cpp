#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    int a, b, c, cont;

    setlocale(LC_ALL, "");

    printf("\n Entre com o n�mero A: ");
    scanf("%d", &a);

    printf("\n Entre com o n�mero B: ");
    scanf("%d", &b);

    printf("\n Entre com o n�mero de C: ");
    scanf("%d", &c);

    int soma = a + b + c;
    float media = soma/3;

    // printf("\n A soma de A, B e C �: %d", soma);
    // printf("\n A m�dia de A, B e C �: %f", media);


    printf("\n Selecione uma das op��es:  \n 1 - Imprimir a soma dos numeros. \n 2 - Imprimir a m�dia dos n�meros");
    scanf("%d", cont);

    switch(cont){
        case 1:
            printf("\n A soma de A, B e C �: %d", soma);
            break;
        case 2:
            printf("\n A m�dia de A, B e C �: %f", media);
            break;
        default:
            printf("\n Fim do programa.");
        }

    system("pause");
}
