#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Controle de fluxo
    if(idade < 16)
    {
        printf("Não pode votar.\n");
    }
    else if(idade < 18 || idade >= 70)
    {
        printf("Voto facultativo.\n");
    }
    else
    {
        printf("Voto obrigatório.\n");
    }
    return 0;
}