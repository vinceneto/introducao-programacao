#include <stdio.h>

int main()
{
    float C, F, temperatura;

    //Entrada de Dados
    printf("Digite a temperatura em graus C: ");
    scanf("%f", &C);

    //Processamento
    F = (1.8 * C) + 32;

    //Saída de Dados
    printf("\nA temperatura em Fahrenheit e': %.1f F", F);
    return 0;
}