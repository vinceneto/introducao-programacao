#include <stdio.h>

int main()
{
    int numero;

    for(numero = -1; numero != 0; ){
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if(numero != 0){
            printf("Voce digitou: %d\n", numero);
        }
    }
    printf("Programa Encerrado.\n");

    return 0;
}