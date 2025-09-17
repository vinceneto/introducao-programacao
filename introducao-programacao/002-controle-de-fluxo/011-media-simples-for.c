#include <stdio.h>

int main()
{
    int i;
    float media = 0, soma = 0, nota;

    printf("Digite as notas do aluno:\n");
    for(i = 1; i <= 2; i++)
    {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    } 
    media = soma / 2;

    printf("Media = %.2f\n", media);

    return 0;
}