#include <stdio.h>

int main()
{
    int i, soma = 0;

    for(i = 1; i <= 10; i++)
    {
        soma = soma + i;
        printf("%da iteracao: %d\n", i, soma);
    }
    printf("A soma dos numeros de 1 a 10 eh: %d\n", soma);
    return 0;
}