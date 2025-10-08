#include <stdio.h>

int main()
{
    int vetor[5];
    int i, soma = 0;

    printf("Digite 5 numeros inteiros:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];    // soma enquanto lê
    }
    
    //Resultado
    printf("A soma dos elementos do vetor = %d\n", soma);

    return 0;
}