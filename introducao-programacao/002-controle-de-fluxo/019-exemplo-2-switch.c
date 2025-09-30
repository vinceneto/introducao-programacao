#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro de 0 a 9: ");
    scanf("%d", &num);

    switch(num)
    {
        case 9: printf("Nove\n"); break;
        case 8: printf("Oito\n"); break;
        case 7: printf("Sete\n"); break;
        case 6: printf("Seis\n"); break;
        case 5: printf("Cinco\n"); break;
        case 4: printf("Quatro\n"); break;
        case 3: printf("Tres\n"); break;
        case 2: printf("Dois\n"); break;
        case 1: printf("Um\n"); break;
        case 0: printf("Zero\n"); break;
        default: printf("Numero invalido.\n");
    }

    return 0;
}