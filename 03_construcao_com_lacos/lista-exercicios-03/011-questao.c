/**
 * 11 – Contagem até um limite: Desenvolva um programa que leia um número inteiro positivo e imprima todos os números de 1 até esse valor, utilizando exclusivamente o laço while.
 */

#include <stdio.h>

int main()
{
    int i = 1, valor;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &valor);
    
    while( i <= valor)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}