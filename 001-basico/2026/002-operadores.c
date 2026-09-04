#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    int c = 23;
    int d = c + 4;
    int e;
    float p, r;

    // Utilizando Operadores Relacionais e Lógicos
    a = (c < 20) || (d > c); //Operador OU
    b = (c < 20) && (d > c); //Operador E
    e = !(c < 20);           //Operador NÃO

    // Utilizando Operadores Aritméticos
    a = c + d;  // Adição
    b = a - a;  // Subtração
    c = a * 2;  // Multiplicação
    d = c / 2;  // Divisão
    e = 10 % 2; // Resto da Divisão
    p = pow(9, 2); // Potenciação
    r = sqrt(p);    // Raiz Quadrada

    // Imprimindo as variáveis com printf
    printf("=\t=\t=\t=\t=");
    printf("\n");
    printf("Imprimindo os valores das variaveis.\n");
    printf("Valor de a: %d\n", a); // Imprimindo um valor Inteiro
    printf("Valor de a: %d e Valor de b: %d\n", a, b);
    printf("Valor de p: %f\n", p); // Imprimindo um valor Real
    printf("Valor de r: %.2f\n", r);
    printf("=\t=\t=\t=\t=");
    printf("\n");
    return 0; 
}