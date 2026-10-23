#include <stdio.h>

int main()
{
    int numero_inteiro;
    float numero_real;
    char caractere;
    char nome[100];
    
    // Lendo uma variável do tipo caractere (cadeia)
    printf("Digite seu nome completo: ");
    scanf(" %s", nome);

    // Lendo uma variável do tipo inteiro
    printf("Digite sua idade: ");
    scanf("%d", &numero_inteiro);

    // Lendo uma variável do tipo real
    printf("Digite sua altura: ");
    scanf("%f", &numero_real);

    // Lendo uma variável do tipo caractere
    printf("Digite seu sexo (M ou F): ");
    scanf(" %c", &caractere);

    // Resumo das informações
    printf("\n===== RESUMO =====\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d Altura: %.2f\n", numero_inteiro, numero_real);
    //printf("Altura: %.2f\n", numero_real);
    printf("Sexo: %c\n", caractere);
    printf("===== ===== =====");


    return 0;
}