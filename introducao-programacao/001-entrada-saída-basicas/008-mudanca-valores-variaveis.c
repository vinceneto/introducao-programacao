#include <stdio.h>

int main()
{
    int a = 6;      // Inicialmente a variável a = 6;
    int b = 0;
    int c = b + a;
    printf("---------------------------\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    printf("---------------------------\n");

    b = a;
    printf("---------------------------\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    printf("---------------------------\n");

    a = a * 6;      // Atualização da variável a = 36;
    printf("---------------------------\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    printf("---------------------------\n");

    a = c;          // Atualização da 
    printf("---------------------------\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    printf("---------------------------\n");

    c = (b + a) + c;
    printf("---------------------------\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
    printf("---------------------------\n");

    return 0;
}