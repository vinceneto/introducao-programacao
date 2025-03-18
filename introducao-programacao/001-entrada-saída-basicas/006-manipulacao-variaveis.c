#include <stdio.h>

int main()
{
    int a = 2, b = 3, c;

    c = a + b;
    a = c - 1;
    b = a + c;

    printf("Valores finais a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}