#include <stdio.h>
#define TAMANHO 5

int main()
{
    // Declaração de vetores
    int vetor01[5];     // Sem inicialização
    int vetor02[5] = {10, 20, 30, 40, 50};      // Com inicialização
    int vetor03[] = {100, 200, 300, 400, 500};  // Com inicialização

    // Acessando e atribuindo valores
    vetor01[0] = 1000;
    vetor01[1] = 2000;

    // Acessando e Imprimindo valores manualmente
    printf("|-- Impressao Manual do Vetor 02 --|\n");
    printf("Vetor02[0] = %d\n", vetor02[0]);
    printf("Vetor02[1] = %d\n", vetor02[1]);
    printf("Vetor02[2] = %d\n", vetor02[2]);
    printf("Vetor02[3] = %d\n", vetor02[3]);
    printf("Vetor02[4] = %d\n", vetor02[4]);

    // Acessando e Imprimindo valores automaticamente
    int i;
    printf("\n|-- Impressao Automatizada do Vetor 03 --|\n");
    for(i = 0; i < TAMANHO; i++)
    {
        printf("Vetor03[%d] = %d\n", i, vetor03[i]);
    }

    return 0;
}