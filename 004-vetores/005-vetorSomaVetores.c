// 11. Leia dois vetores de 5 posições e crie um terceiro
// vetor com a soma dos elementos.

#include <stdio.h>
#define TAMANHO 5

int main()
{
    int vetor01[TAMANHO];
    int vetor02[TAMANHO];
    int vSoma[TAMANHO];
    int i;

    // Preencher os vetores
    for(i = 0; i < TAMANHO; i++)
    {
        printf("Vetor01[%d] = ", i);
        scanf("%d", &vetor01[i]);

        printf("Vetor02[%d] = ", i);
        scanf("%d", &vetor02[i]);

        // Preenchendo o vetor soma
        vSoma[i] = vetor01[i] + vetor02[i];
    }

    // Imprimindo o vetor Soma
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vSoma[i]);
    }
    

    return 0;
}