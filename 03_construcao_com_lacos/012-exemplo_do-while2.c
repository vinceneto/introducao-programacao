#include <stdio.h>

int main()
{
    int numero, soma = 0;

    do
    {
        printf("Digite um numero (0 para terminar): ");
        scanf("%d", &numero);
        soma = soma + numero;   // soma += numero
    } while(numero != 0);

    printf("Soma total: %d\n", soma);

    return 0;
}