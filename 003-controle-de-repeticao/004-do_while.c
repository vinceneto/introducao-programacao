#include <stdio.h>

int main()
{
    int num;

    do
    {
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &num);

        if (num < 1 || num > 10)
            printf("Valor invalido. Tente novamente.\n");

    } while(num < 1 || num > 10);

    printf("Numero valido: %d\n", num);
    return 0;
}