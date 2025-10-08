#include <stdio.h>
#define TAMANHO 5

int main()
{
    int vetor1[TAMANHO] = {10, 20, 30, 40, 50};
    int vetor2[TAMANHO] = {5, 10, 15, 20, 25};
    int resultado[TAMANHO];
    int produto_escalar = 0;
    int i;
    //Soma/Subtracao/Multiplicacao/Divisao de Vetores
    for (i = 0; i < TAMANHO; i++)
    {
        //resultado[i] = vetor1[i] + vetor2[i];
        // resultado[i] = vetor1[i] - vetor2[i];
        // resultado[i] = vetor1[i] * vetor2[i];
        //resultado[i] = vetor1[i] / vetor2[i];
        produto_escalar += vetor1[i] * vetor2[i];
    }

    //Imprimindo o resultado
    printf("O produto escalar e': %d\n", produto_escalar);
    // for(i = 0; i < TAMANHO; i++)
    // {
    //     printf("%d\t", resultado[i]);
    // }


    return 0;
}