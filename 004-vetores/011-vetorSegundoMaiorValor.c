// 16. Crie um programa que encontre o segundo maior valor de um vetor.
#include <stdio.h>
#define TAMANHO 10

int main()
{
    int i, vetor[TAMANHO];
    int maior, segundoMaior;

    // Preenchendo o vetor
    for(i = 0; i < TAMANHO; i++)
    {
        printf("vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    // Inicialização
    maior = vetor[0];
    segundoMaior = vetor[0];

    // Encontrar o maior e o segundo maior
    for(i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] > maior)
        {
            segundoMaior = maior;
            maior = vetor[i];
        }
        else if(vetor[i] > segundoMaior && vetor[i] != maior)
        {
            segundoMaior = vetor[i];
        }
    }
    // Exibição
    printf("\nMaior valor: %d\n", maior);
    printf("Segundo maior valor: %d\n", segundoMaior);
    
    return 0;
}