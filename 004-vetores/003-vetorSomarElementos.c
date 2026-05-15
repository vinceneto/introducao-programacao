#include <stdio.h>
#define TAMANHO 5

int main()
{
    int i, somatorio = 0;
    int vetor[TAMANHO];

    // Preenchendo o vetor
    for(i = 0; i < TAMANHO; i++)
    {
        printf("Vetor[%d] = ", i);
        scanf("%d", &vetor[i]);

        // Somatorio
        somatorio += vetor[i];
    }
    printf("Resultado da Soma = %d\n", somatorio);

    return 0;
}