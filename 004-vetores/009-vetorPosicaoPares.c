// 23. Leia um vetor e mostre a posição de todos os números pares.
#include <stdio.h>
#define TAMANHO 10

int main()
{
    int i, vPares[TAMANHO];

    // Preenchendo o vetor
    for (i = 0; i < TAMANHO; i++)
    {
        printf("vPares[%d] = ", i);
        scanf("%d", &vPares[i]);
    }

    // Imprimindo o vetor
    printf("A posicao dos numeros pares: ");
    for(i = 0; i < TAMANHO; i++)
    {
        if(vPares[i] % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}