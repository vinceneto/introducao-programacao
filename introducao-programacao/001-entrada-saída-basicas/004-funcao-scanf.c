#include <stdio.h>

int main()
{
    char nome[100];
    int idade;
    float altura;
    double peso;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%lf", &peso);
//    printf("Digite o ano atual:");

    printf("\n>>> Resumo de Informacoes <<<\n");
    printf("* Nome: %s\n", nome);
    printf("* Idade: %d anos\n", idade);
    printf("* Altura: %.2f m\n", altura);
    printf("* Peso: %.1f kg\n", peso);

    return 0;
}
