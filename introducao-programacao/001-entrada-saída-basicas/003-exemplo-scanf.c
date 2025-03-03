#include <stdio.h>

int main()
{
    //Declaração de Variáveis
    char nome[50];          
    int idade;
    float nota;
    int matricula;

    //Entrada de Dados
    //scanf(especificador, variavel)
    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua nota: ");
    scanf("%f", &nota);

    printf("Digite a sua matricula: ");
    scanf("%d", &matricula);


    // Saída do Programa
    printf("\n\t>> RELATORIO DO ALUNO <<\n");
    printf("---------------------------------------");
    printf("\nNOME: %s", nome);
    printf("\nIDADE: %d", idade);
    printf("\nNOTA: %.2f", nota);
    printf("\nMATRICULA: %d", matricula);
    printf("\n---------------------------------------");
    printf("\n\t>> FIM DO RELATORIO <<\n");

    return 0;
}