#include <stdio.h>

int main()
{
    float nota1 = 0, nota2 = 0, media = 0;
    int resposta;

    do
    {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        printf("Media do aluno = %.2f\n", media);

        printf("Digite 1 para CONTINUAR ou 2 para SAIR\n");
        scanf("%d", &resposta);

    } while (resposta == 1);

    printf("Saindo do programa....\n");
    
    return 0;
}