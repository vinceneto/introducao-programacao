#include <stdio.h>

int main()
{
    int i;
    float nota, soma = 0, media = 0;

    for(i = 0; i < 4; i++)
    {
        printf("Digite a nota %d do aluno: ", i+1);
        scanf("%f", &nota);

        soma = soma + nota; // soma += nota
    }

    media = soma / 4;
    printf("A media do aluno eh: %.1f", media);
    return 0;
}