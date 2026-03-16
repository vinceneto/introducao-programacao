#include <stdio.h>

int main()
{
    int A, B, X;
    // Entrada de Dados
    printf("Digite um valor inteiro pra A: ");
    scanf("%d", &A);

    printf("Digite um valor inteiro pra B: ");
    scanf("%d", &B);

    //Processamento
    X = A + B; // Soma
    // X = A - B; // Subtracao
    // X = A * B; // Multiplicacao
    // X = A / B; // Divisao

    // Saída de Dados
    printf("X = %d\n", X);

    return 0;
}
