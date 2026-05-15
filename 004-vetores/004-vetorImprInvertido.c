#include <stdio.h>
#define TAMANHO 10

int main()
{
    int i;
    int vetor[TAMANHO];

    // Preenchendo o vetor
    for(i = 0; i < TAMANHO; i++)
    {
        printf("Vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }
    
    // Imprimindo o vetor invertido
    printf("[");
    for(i = TAMANHO - 1; i >= 0; i--)
    {
        printf(" %d", vetor[i]);
    }
    printf(" ]\n");

    return 0;
}