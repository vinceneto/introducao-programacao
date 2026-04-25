#include <stdio.h>

int main()
{
    int i, valor, numerador, denominador, divisao = 0;

    for(i = 0; i < 2; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        if(i == 0)
        {
            numerador = valor;
        } 
        else if(i > 0 && valor != 0)
        {
            denominador = valor;
        }
        else
        {
            i--;
        } 
    }
    
    divisao = numerador/denominador;
    printf("Valor da divisao é: %d", divisao);

    return 0;
}