#include <stdio.h>

int main()
{
    float x1, x2;
    float soma, subtracao, multiplicacao, divisao;
    char op;

    printf("==\tOperacoes Basicas\t==\n");
    printf("===========================\n");
    printf("Opcoes:\n");
    printf("Soma:           (+)\n");
    printf("Subtracao:      (-)\n");
    printf("Multiplicacao:  (*)\n");
    printf("Divisao:        (/)\n");
    scanf("%c", &op);

    if(op == '+')
    {
        printf("Digite dois valores: ");
        scanf("%f %f", &x1, &x2);
        soma = x1 + x2;
        printf("O resultado da soma = %.1f\n", soma);
    }
    else if (op == '-')
    {
        printf("Digite dois valores: ");
        scanf("%f %f", &x1, &x2);
        subtracao = x1 - x2;
        printf("O resultado da subtracao = %.1f\n", subtracao);
    }
    else if (op == '*')
    {
        printf("Digite dois valores: ");
        scanf("%f %f", &x1, &x2);
        multiplicacao = x1 * x2;
        printf("O resultado da multiplicacao = %.1f\n", multiplicacao);
    }
    else if (op == '/')
    {
        printf("Digite dois valores: ");
        scanf("%f %f", &x1, &x2);

        if(x2 > 0)
        {
            divisao = x1 / x2;
            printf("O resultado da divisao = %.1f\n", divisao);
        }
        else
        {
            printf("Operacao Inválida!!!\n");
        }
    }
    else
    {
        printf("Operador Inexistente!\n");
    }

    return 0;
}