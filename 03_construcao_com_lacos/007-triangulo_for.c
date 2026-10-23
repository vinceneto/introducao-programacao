#include <stdio.h>

int main()
{
    // Utilizando laço FOR aninhados
    int linha, coluna;
    for(linha = 1; linha <= 5; linha++)
    {
        for(coluna = 1; coluna <= linha; coluna++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}