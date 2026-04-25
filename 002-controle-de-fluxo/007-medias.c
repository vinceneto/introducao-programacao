#include <stdio.h>

int main()
{
    int x, y, z, op;
    int geometrica, ponderada, harmonica, aritmetica;

    printf("==\tOperacoes de Media\t==\n");
    printf("1. Geometrica\n");
    printf("2. Ponderada\n");
    printf("3. Harmonica\n");
    printf("4. Aritmetica\n");
    printf("\nDigite a opcao: ");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("Digite 3 valores inteiros (x y z): ");
        scanf("%d %d %d", &x, &y, &z);

        if ((x >= 0) && (y >= 0) && (z >= 0))
        {
            geometrica = x * y * z;
            printf("\nMedia Geometrica = %d\n", geometrica);
        }
        else
        {
            printf("\nExistem valores negativos!\n");
            return 1;
        }
        
    }
    else if (op == 2)
    {
        printf("Digite 3 valores inteiros (x y z): ");
        scanf("%d %d %d", &x, &y, &z);

        if ((x >= 0) && (y >= 0) && (z >= 0))
        {
            ponderada = (x + (2 * y) + (3 * z))/ 6;
            printf("\nMedia Ponderada = %d\n", ponderada);
        }
        else
        {
            printf("\nExistem valores negativos!\n");
            return 1;
        } 
    }
    else
    {
        printf("\nOpção Invalida!\n");
    }
    

    return 0;
}