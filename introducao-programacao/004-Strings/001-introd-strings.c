#include <stdio.h>

int main()
{
    // Declaração da String
    char nome[50];

    // Entrada de Dados
    printf("Digite seu nome completo: ");
    //gets(nome);
    //scanf("%s", nome);
    fgets(nome, 50, stdin); 


    // Saída de Dados
    printf("Voce digitou: %s\n", nome);
    return 0;
}