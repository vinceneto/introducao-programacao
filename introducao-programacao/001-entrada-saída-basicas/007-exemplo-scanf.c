#include <stdio.h>

int main()
{
    int idade;
    float altura, peso;
    char nome[50];

    printf("Digite seu nome: ");
    scanf(" %s", nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Agora digite sua altura: ");
    scanf("%f", &altura);
    printf("Agora digite seu peso: ");
    scanf("%f", &peso);

    printf("FICHA CADASTRAL\n\n");
    printf("Nome do Usuario: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);
    printf("Peso: %f\n\n", peso);

    return 0;
}