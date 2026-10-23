#include <stdio.h>

int main()
{
    int opcao;
    float A, B;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 3)
        {
            printf("Digite dois numeros: ");
            scanf("%f %f", &A, &B);

            if(opcao == 1) printf("Resultado: %.2f\n", A + B);
            else if(opcao == 2) printf("Resultado: %.2f\n", A - B);
            else printf("Resultado: %.2f\n", A * B);
        }
        else if (opcao != 4) printf ("Opcao Invalida!\n");

    } while (opcao != 4);
    printf("Programa encerrado!\n");
    
    return 0;
}