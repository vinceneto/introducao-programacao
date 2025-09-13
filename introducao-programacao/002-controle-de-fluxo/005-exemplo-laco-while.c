#include <stdio.h>

int main()
{
    int numero = -1;

    while(numero != 0){
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if(numero != 0){
            printf("Voce digitou: %d\n", numero);
        }
    }
    printf("Programa encerrado. \n");

    return 0;
}