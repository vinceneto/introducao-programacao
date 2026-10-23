#include <stdio.h>

int main()
{
    int A, B;

    printf("Digite um valor inteiro para A: ");
    scanf("%d", &A);
    printf("Digite um valor inteiro para B: ");
    scanf("%d", &B);

    if(A < B) // Faz a verificação se a informação é verdadeira
    {
        printf("A e' menor que B.\n");   
    }
    else if (A > B)
    {
        printf("A e' maior que B.\n");
    }
    else
    {
        printf("A e' igual a B.\n");
    }

    return 0;
}