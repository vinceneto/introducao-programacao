#include <stdio.h>

int main()
{
    int opcao, x, y;
    char op;

    printf("----- Calculadora Basica -----\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("Opcao: ");
    scanf("%c", &op);

    switch(op)
    {
        case '1':
                printf("Digite um valor pra x: ");
                scanf("%d", &x);
                printf("Digite um valor pra y: ");
                scanf("%d", &y);
                printf("O valor da soma e': %d", x + y);
                break;
        case '2':
                printf("Digite um valor pra x: ");
                scanf("%d", &x);
                printf("Digite um valor pra y: ");
                scanf("%d", &y);
                printf("O valor da subtracao e': %d", x - y);
                break;
        case '3':
                printf("Digite um valor pra x: ");
                scanf("%d", &x);
                printf("Digite um valor pra y: ");
                scanf("%d", &y);
                printf("O valor da multiplicacao e': %d", x * y);
                break;
        case '4':
                printf("Digite um valor pra x: ");
                scanf("%d", &x);
                printf("Digite um valor pra y: ");
                scanf("%d", &y);
                printf("O valor da divisao e': %d", x / y);
                break;
        default:
                printf("Opcao Invalida\n");  
    }
    return 0;
}