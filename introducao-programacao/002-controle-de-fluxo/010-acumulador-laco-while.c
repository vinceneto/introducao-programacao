#include <stdio.h>

int main()
{
    int i = 1;
    int soma = 0;

    while(i <= 10)
    {
        soma = soma + i;
        printf("%da iteracao: %d\n", i, soma);
        i++;
    }
    printf("A soma dos numeros de 1 a 10 eh: %d\n", soma);
    return 0;
}