#include <stdio.h>

int main()
{
    // Trabalhado com operadores Relacionais e Lógicos

    int a, b, e;
    int c = 23;         // Inicializando a variável c com valor 23
    int d = c + 24;     // Inicializando a variável d com a operação c + 24

    // Operador OU/OR
    a = (c < 20) || (d > c);    // Verdadeiro - 1 - TRUE
    
    // Operador E/AND
    b = (c < 20) && (d > c);    // Falso - 0 - FALSE

    // OPERADOR NÃO/NOT
    e = !(c < 20) || (d > c);
    e = !((c < 20) || (d > c));

    return 0;
}