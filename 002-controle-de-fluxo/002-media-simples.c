#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\nMedia Final: %.1f\n", media);

    if(media >= 7.5)
    {
        printf("Situacao: APROVADO.\n");
    }
    else
    {
        printf("Situacao: REPROVADO.\n");
    }

    return 0;
}