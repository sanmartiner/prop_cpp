#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

typedef struct Data{
    int dia;
    int mes;
    int ano;
} Data;

struct Aluno{
    int id;
    Data nascimento;

};

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};

int main(){

    //Criar uma palavra
    struct palavra primeiraPalavra;

    //Modificando campos palava
    primeiraPalavra.ordem = 1;
    primeiraPalavra.letra = 'D';
    strcpy(primeiraPalavra.texto, "Hello World");

    //Mostrando valores palavras
    printf("Ordem: %d, Primeira letra: %c, Palavra: %s \n", primeiraPalavra.ordem,primeiraPalavra.letra,primeiraPalavra.texto);

    //Criando um Aluno

    struct Aluno aluno1;

    //Modificando valores

    aluno1.id = 15;

    aluno1.nascimento.ano = 1993;
    aluno1.nascimento.mes = 4;
    aluno1.nascimento.dia = 13;

    //Imprimindo valores
    printf("Nascido em: %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.dia = 13);

//Retorno da função
return 0;
}
