#include <stdio.h>

int main()
{
    // Utilizando laço FOR aninhados
    int linha, coluna;
    for(linha = 1; linha <= 5; linha++)
    {
        // printf("Linha: %d | ", linha);
        for(coluna = 1; coluna <= 5; coluna++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}