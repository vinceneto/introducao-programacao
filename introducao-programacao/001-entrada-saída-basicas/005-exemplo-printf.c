#include <stdio.h>

int main()
{
    char caractere = 'a';
    int inteiro = 33;
    float real = 66.8;
    double duplo = 57868.97;
    char nome[] = "Vicente";

    printf(">>> Imprimindo tipos de variáveis <<<\n");
    printf("Caracter: %c\n", caractere);
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.1f\n", real);
    printf("Duplo: %.2f\n", duplo);
    printf("Duplo: %e\n", duplo);
    printf("Duplo: %g\n", duplo);
    printf("Nome: %s\n", nome);

    return 0;
}