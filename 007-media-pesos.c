#include <stdio.h>

int main()
{
    double A, B, media;

    printf("Digita a nota 1: ");
    scanf("%lf", &A);

    printf("Digita a nota 2: ");
    scanf("%lf", &B);

    media = ((A * 3.5) + (B * 7.5)) / 11;

    printf("MEDIA = %.5f\n", media);

    return 0;
}