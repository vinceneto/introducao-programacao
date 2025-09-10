#include <stdio.h>

int main()
{
    int valor;
    int nota100, nota50, nota20, nota10;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if(valor % 10 != 0){
        printf("Erro: só é possível sacar valores múltiplos de 10.\n");
    } else if (valor > 0){
        nota100 = valor / 100;
        valor = valor % 100;

        nota50 = valor / 50;
        valor = valor % 50;

        nota20 = valor / 20;
        valor = valor % 20;

        nota10 = valor / 10;
        valor = valor % 10;

        printf("Saque realizado!\nNotas entregues:\n");
        if(nota100 > 0) printf("%d de 100\n", nota100);
        if(nota50 > 0) printf("%d de 50\n", nota50);
        if(nota20 > 0) printf("%d de 20\n", nota20);
        if(nota10 > 0) printf("%d de 10\n", nota10);
    } else {
        printf("Erro: valor inválido para saque.\n");
    }

    return 0;
}