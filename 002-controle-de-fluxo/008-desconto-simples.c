#include <stdio.h>

int main()
{
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    // Controle de Fluxo
    if(valor >= 1000)
    {
        valor = valor * 0.9; // 10% de desconto
    }
    else if(valor >= 500)
    {
        valor = valor * 0.95; // 5% de desconto
    }
    else
    {
        printf("Não é possível acrescentar desconto.\n");
    }


    printf("Valor final: %.2f\n", valor);

    return 0;
}