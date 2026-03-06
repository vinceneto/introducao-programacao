#include <stdio.h>

int main()
{
    char caractere = 'v';
    int inteiro = 34;
    float real = 3.14;
    double duplo = 6.12345678;
    char string[100] = "vicente";

    printf("\t---IMPRIMINDO TIPOS DE VARIAVEIS---\n");
    printf("\t\t-COM A FUNCAO PRINTF()-\n");
    printf("-----------------------------------\n");
    printf("* Caractere: %c\n", caractere);
    printf("* Inteiro: %d\n", inteiro);
    printf("* Real: %.2f\n", real);
    printf("* Duplo: %.8f\n", duplo);
    printf("* String: %s\n", string);
    printf("-----------------------------------\n");

    return 0;
}
