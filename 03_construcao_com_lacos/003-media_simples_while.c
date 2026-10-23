#include <stdio.h>

int main()
{
    int i = 0; // contador ou iterador
    float soma = 0; // acumulador
    float media, nota;

    printf("Digite as notas do aluno\n");
    while(i < 4)
    {
        printf("[%d]: ", i);
        scanf("%f", &nota);
        // soma = soma + nota;
        soma += nota;
        i++;
    }
    media = soma / 4;
    printf("A media final do aluno: %.1f\n", media);
    return 0;
}