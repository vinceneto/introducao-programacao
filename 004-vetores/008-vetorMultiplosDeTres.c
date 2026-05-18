// 15. Leia 12 números e mostre apenas os múltiplos de 3.
#include <stdio.h>
#define TAMANHO 12

int main()
{
    int i, vMultiplo[TAMANHO];

    // Preenchendo vetor
    for(i = 0; i < TAMANHO; i++)
    {
        printf("vMultiplo[%d] = ", i);
        scanf("%d", &vMultiplo[i]);
    }

    // Imprimindo o vetor
    printf("Multiplos de 3: ");
    for (i = 0; i < TAMANHO; i++)
    {
        if(vMultiplo[i] % 3 == 0)
            printf("%d ", vMultiplo[i]);
    }
    return 0;
}