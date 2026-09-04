#include <stdio.h>

int main()
{
    int numero = 10; 
    printf("Valor inicial: %d\n", numero);

    numero = 20;
    printf("Depois da primeira alteracao: %d\n", numero);

    numero = 35;
    printf("Depois da segunda alteracao: %d\n", numero);
    
    numero = numero + 10;
    printf("Depois de somar 10: %d\n", numero);

    numero = numero * 2;
    printf("Depois de multiplicar por 2: %d\n", numero);
    
    numero = numero - 15;
    printf("Depois de subtrair 15: %d\n", numero);

    return 0;
}