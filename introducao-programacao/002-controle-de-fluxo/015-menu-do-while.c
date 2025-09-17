#include <stdio.h>

int main()
{
    int opcao;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Opcao 1\n");
        printf("2 - Opcao 2\n");
        printf("3 - Opcao 3\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Voce escolheu a Opcao 1.\n");
        }
        else if(opcao == 2){
            printf("Voce escolheu a Opcao 2.\n");
        }
        else if (opcao == 3){
            printf("Voce escolheu a Opcao 3.\n");
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