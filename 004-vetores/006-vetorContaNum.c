// 22. Leia um vetor e informe quantas vezes um número aparece.
#include <stdio.h>
#define TAMANHO 10

int main()
{
    int vetor[TAMANHO];
    int i, contNum = 0, valor;

    // Prenchendo o vetor
    for(i = 0; i < TAMANHO; i++)
    {
        printf("vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    // Verifica numero repetido
    for(i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] == valor) contNum++;
    }

    printf("O valor %d aparece %d vezes.\n", valor, contNum);
    return 0;
}