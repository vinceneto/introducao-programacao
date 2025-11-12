#include <stdio.h>

// Variáveis Globais
int valor;
float x;

//Parte 1
// Declaração das Funções
void saudacao();
void imprime_soma(int a, int b);
int multiplica(int a, int b);

// Parte 2
int main()
{
    //Variáveis Locais
    int w, y, z;
    saudacao(); // Chama função sem parâmetros e sem retorno
    imprime_soma(5, 10); //Chama função com parâmetros, mas sem retrono;
    int produto = multiplica(4, 3);
    printf("Produto: %d\n", produto);

    return 0;
}

// Parte 3:
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