// 26. Leia um vetor e verifique se ele está em ordem crescente.
#include <stdio.h>
#define TAMANHO 10

int main()
{
    int i, vetor[TAMANHO];
    int crescente = 1; // 1 =  Indica que o vetor é crescente

    // Preenchendo o vetor
    printf("Digite 10 numeros:\n");
    for(i = 0; i < TAMANHO; i++)
    {
        printf("vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    // Verificacao
    for(i = 0; i < TAMANHO - 1; i++)
    {
        if(vetor[i] > vetor[i + 1])
        {
            crescente = 0;
            break;
        }
    }
    // Resultado
    if (crescente == 1)
    {
        printf("\nO vetor esta em ordem crescente.\n");
    }
    else
    {
        printf("\nO vetor NAO esta em ordem crescente.\n");
    }
    
    return 0;
}