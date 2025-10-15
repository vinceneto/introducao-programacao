#include <stdio.h>
#define TAMANHO 10

int main()
{
    int vetor[TAMANHO];
    int i, j, elemento;
    int valor_repetido;

    printf("Preencha o vetor com 10 valores inteiros:\n");
    for(i = 0; i < TAMANHO; i++)
    {
        scanf("%d", &elemento);
        valor_repetido = 0;

        for(j = 0; j < i; j++)
        {
            if(vetor[j] == elemento)
            {
                valor_repetido = 1;
                break;
            }
        }
        if (valor_repetido == 1)
        {
            printf("Valor ja inserido. Tente novamente!\n");
            i--;
        }
        else
        {
            vetor[i] = elemento;
        }
    }

    printf("\nVetor preenchido: [ ");
    for(i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("]\n");


    return 0;
}