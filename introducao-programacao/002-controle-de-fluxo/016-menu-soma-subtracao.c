#include <stdio.h>

int main()
{
    int opcao;
    int a, b, resultado;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Somar dois numeros\n");
        printf("2 - Subtrair dois numeros\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Digite dois numeros: ");
            scanf("%d %d",&a, &b);
            resultado = a + b;
            printf("Resultado da soma: %d\n", resultado);
        }
        else if(opcao == 2){
            printf("Digite dois numeros: ");
            scanf("%d %d",&a, &b);
            resultado = a - b;
            printf("Resultado da subtracao: %d\n", resultado);
        }
        else if (opcao == 0){
            printf("Saindo do programa...\n");
        }
        else{
            printf("Opcao Invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}