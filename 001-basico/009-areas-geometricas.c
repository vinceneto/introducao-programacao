#include <stdio.h>

int main()
{
    double A, B, C;
    double triangulo_ret, circulo, trapezio, quadrado, retangulo;

    //Entradas de Dados
    printf("Entre com valores para A, B e C, respectivamente: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    //Triângulo Retângulo
    triangulo_ret = (A * C) / 2;

    //Círculo
    circulo = 3.14159 * (C * C);

    //Trapézio
    trapezio = ((A + B) * C) / 2;

    //Quadrado
    quadrado = B * B;

    //Retângulo
    retangulo = A * B;

    printf("TRIAGULO RETANGULO: %.3f\n", triangulo_ret);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}