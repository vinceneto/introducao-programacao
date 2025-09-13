#include <stdio.h>

int main()
{
    int i = 0;      // Expressão Inicial
    int j = 10;

    while( i < 10){    // Expressão Booleana
        printf("%d ", i);
        i++;        // Expressão de Incremento
    }
    //printf("\n\n>>VALOR FINAL DO CONTADOR: %d<<\n", i);
    printf("\n");

    while (j >= 1){
        printf("%d ", j);
        j--;        // Expressão de Decremento
    }
    
    return 0;
}