#include <stdio.h>

void boas_vindas()
{
    printf("Bem-vindo ao sistema!\n");
}

void mostrar_menu()
{
    printf("1. Opcao 1\n");
    printf("2. Opcao 2\n");
    printf("Escolha uma opcao: ");
}

void processar_opcao(int opcao)
{
    if (opcao == 1)
    {
        printf("Voce escolheu a Opcao 1.\n");
    } 
    else if(opcao == 2)
    {
        printf("Voce escolheu a Opcao 2.\n");
    }
    else
    {
        printf("Opcao Invalida!!!\n");
    }
    
}

int main()
{
    boas_vindas();
    mostrar_menu();
    int op;
    scanf("%d", &op);
    processar_opcao(op);
    return 0;
}