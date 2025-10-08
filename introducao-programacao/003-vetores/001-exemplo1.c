#include <stdio.h>
#define TAMANHO 7

int main()
{
    int notas[TAMANHO];
    int i;

    printf("Digite a nota de 5 estudantes: ");
    for(i = 0 ; i < TAMANHO; i++)
    {
        scanf("%d", &notas[i]);
    }

    for(i = 0; i < TAMANHO; i++)
    {
        printf("Indice %d: %d\n", i, notas[i]);
    }

    // printf("Indice 0: %d\n", notas[0]);
    // printf("Indice 1: %d\n", notas[1]);
    // printf("Indice 2: %d\n", notas[2]);
    // printf("Indice 3: %d\n", notas[3]);
    // printf("Indice 4: %d\n", notas[4]);

    return 0;
}