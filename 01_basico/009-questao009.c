#include <stdio.h>

int main()
{
    int qtdeAtual;
    int qtdeMinima;

    scanf("%d", &qtdeAtual);
    scanf("%d", &qtdeMinima);

    printf("O estoque esta' abaixo do minimo? %d\n", qtdeAtual < qtdeMinima);
    printf("O estoque esta' exatamente do minimo? %d\n", qtdeAtual == qtdeMinima);
    printf("O estoque esta' acima do minimo? %d \n", qtdeAtual > qtdeMinima);

    return 0;
}