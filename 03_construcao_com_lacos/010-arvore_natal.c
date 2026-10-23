#include <stdio.h>

int main() {

    int linha, coluna;
    int altura = 8;

    printf("\n");

    // Imprime a arvore de Natal
    for (linha = 1; linha <= altura; linha++) {

        // Espacos antes dos asteriscos
        for (coluna = 1; coluna <= altura - linha; coluna++) {
            printf(" ");
        }

        // Imprime os asteriscos da arvore
        for (coluna = 1; coluna <= (2 * linha - 1); coluna++) {
            printf("*");
        }

        printf("\n");
    }

    // Tronco da arvore
    for (linha = 1; linha <= 2; linha++) {
        for (coluna = 1; coluna < altura; coluna++) {
            printf(" ");
        }
        printf("|||\n");
    }

    printf("\n");
    printf("*************************\n");
    printf("*      FELIZ NATAL!     *\n");
    printf("*************************\n");

    return 0;
}