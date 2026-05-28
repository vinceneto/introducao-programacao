// 27. Leia um vetor e conte quantas vezes o maior número aparece.
#include <stdio.h>
#define TAMANHO 10

int main()
{
    int i, vMaior[TAMANHO], maior = -99999, contMaior = 0;

    // Preenchendo o vetor
    for(i = 0; i < TAMANHO; i++) // i = i + 1
    {
        printf("vMaior[%d] = ", i);
        scanf("%d", &vMaior[i]);

        if(vMaior[i] >= maior)
            maior = vMaior[i];
    }

    // Verifica quantas vezes o maior valor aparece
    for(i = 0; i < TAMANHO; i++)
    {
        if(vMaior[i] == maior)
            contMaior++;
    }
    printf("O maior valor (%d) apareceu %d vezes.\n", maior, contMaior);

    return 0;
}