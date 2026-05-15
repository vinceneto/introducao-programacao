// 29. Leia um vetor e informe quantos elementos são maiores que a média.
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int vetor[TAMANHO];
    int i, contNum = 0, valor, somatorio = 0;
    float media = 0.0;

    system("cls");
    // Prenchendo o vetor
    for(i = 0; i < TAMANHO; i++)
    {
        printf("vetor[%d] = ", i);
        scanf("%d", &vetor[i]);

        somatorio = somatorio + vetor[i]; // somatorio += vetor[i]
    }
    
    // Casting: float -> int
    media = (float)(somatorio / TAMANHO);
    printf("Media = %.2f\n", media);
    
    // Verifica numero maior que a media
    for(i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] > media) contNum++;
    }

    printf("Quantidade de valores maiores que a media: %d.\n", contNum);
    return 0;
}