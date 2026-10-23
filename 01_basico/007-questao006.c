#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int A, B;
    setlocale(LC_ALL, "");

    printf("Digite o primeiro numero (A): ");
    scanf("%d", &A);
    printf("Digite o segundo numero (B): ");
    scanf("%d", &B);

    printf("A é maior que B?: %d\n", A > B);
    printf("A é menor que B?: %d\n", A < B);
    printf("A e' igual a B?: %d\n", A == B);
    printf("A e' diferente de B?: %d\n", A != B);
    printf("A e' maior ou igual a B?: %d\n", A >= B);
    printf("A e' menor ou igual a B?: %d\n", A <= B);
    
    system("PAUSE");
    return 0;
}