#include <stdio.h>

//Parte 1
// Definição das funções
void saudacao()
{
    printf("Bem-vindo ao mundo das funcoes!\n");
}

void imprime_soma(int a, int b)
{
    printf("Soma: %d\n", a + b);
}

int multiplica (int a, int b)
{
    // int mult = a * b;
    // return mult;

    return a * b;
}

// Parte 2
int main()
{
    saudacao(); // Chama função sem parâmetros e sem retorno
    saudacao(); // Chama função sem parâmetros e sem retorno
    saudacao(); // Chama função sem parâmetros e sem retorno
    saudacao(); // Chama função sem parâmetros e sem retorno
    saudacao(); // Chama função sem parâmetros e sem retorno
    imprime_soma(5, 10); //Chama função com parâmetros, mas sem retrono;
    int produto = multiplica(4, 3);
    printf("Produto: %d\n", produto);

    return 0;
}