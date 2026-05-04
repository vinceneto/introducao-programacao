#include <stdio.h>

int main()
{
    int i = 0;  // Expressão inicial

    while(i <= 100) // Expressão Booleana
    {
        printf("%d  ", i);
        //i++; // i = i + 1 / Exp Incremento
        //i--; // i = i - 1 / Exp. Decremento
        i = i + 5;
    }

    return 0;
}