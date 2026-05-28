#include <stdio.h>
#define TAMANHO 10

int main()
{
    int i;

    printf("Imprimindo numeros pares (2 a 20)\n");
    for(i = 0; i < TAMANHO; i++)
    {
        printf("%d ", (i + 1) * 2);
    }

    return 0;
}