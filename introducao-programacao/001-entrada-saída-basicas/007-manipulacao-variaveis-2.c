#include <stdio.h>

int main()
{
    int a = 4, b = 6, c, d = 1;

    c = a + b;
    a = c - 1;
    c = a + b;
    b = c - a;
    c = c + d;

    printf("Valores finais: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
}