#include <stdio.h>

int main()
{
    int opcao;

    do
    {
        printf("\n=== MENU ===\n");
        printf("1 - Somar dois numeros\n");
        printf("2 - Mostrar mensagem\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:{ // Usar {} se necessário
                int a, b;
                printf("Digite dois numeros:");
                scanf("%d %d", &a, &b);
                printf("Soma: %d\n", a + b);
                break;}
            case 2:
                printf("Voce escolheu a opcao 2\n");
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao Invalida!\n");
        }

    } while (opcao != 0);
    
    return 0;
}