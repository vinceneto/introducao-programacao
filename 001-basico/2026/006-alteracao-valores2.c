#include <stdio.h>

int main()
{
    int A = 5, B = 10, C = 15, D = 20, E = 25;

    printf("1) A = %d | B = %d | C = %d | D = %d | E = %d\n", A, B, C, D, E);

    A = B + 5;
    C = A + D;
    printf("2) A = %d | B = %d | C = %d | D = %d | E = %d\n", A, B, C, D, E);

    B = C - A;
    D = E + B;
    printf("3) A = %d | B = %d | C = %d | D = %d | E = %d\n", A, B, C, D, E);

    E = D - C;
    A = E + B;
    printf("4) A = %d | B = %d | C = %d | D = %d | E = %d\n", A, B, C, D, E);

    C = A * B;
    D = C / E;
    printf("5) A = %d | B = %d | C = %d | D = %d | E = %d\n", A, B, C, D, E);

    E = A + B + C + D;
    printf("6) A = %d | B = %d | C = %d | D = %d | E = %d\n", A, B, C, D, E);

    return 0;
}