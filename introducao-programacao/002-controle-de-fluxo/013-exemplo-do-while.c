#include <stdio.h>

int main()
{
    int numero;

    do
    {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0)
        {
            printf("Voce digitou: %d\n", numero);
        }
    } while (numero != 0);

    printf("Programa encerrado. \n");

    return 0;
}