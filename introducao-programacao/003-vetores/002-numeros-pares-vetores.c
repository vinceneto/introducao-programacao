#include <stdio.h>

int main()
{
    int vetor[10];
    int i;

    //Preenche o vetor com números pares de 2 a 20
    for (i = 0; i < 10; i++)
    {
        vetor[i] = (i + 1) * 2;
    }

    // Imprime o vetor
    printf("Vetor[10]: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}