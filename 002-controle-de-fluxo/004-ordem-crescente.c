#include <stdio.h>

int main()
{
    int A, B, C;
    int maior = -99999, medio = 0, menor = 99999;

    printf("Digite um valor inteiro para A: ");
    scanf("%d", &A);
    printf("Digite um valor inteiro para B: ");
    scanf("%d", &B);
    printf("Digite um valor inteiro para C: ");
    scanf("%d", &C);

    if((A <= B) && (A <= C) && (B <= C) )
    {
        menor = A;
        medio = B;
        maior = C;
    } 
    else if ((A <= B) && (A <= C) && (C <= B))
    {
        menor = A;
        medio = C;
        maior = B;
    }
    else if ((B <= A) && (B <= C) && (A <= C))
    {
        menor = B;
        medio = A;
        maior = C;
    }
    else if ((B <= A) && (B <= C) && (C <= A))
    {
        menor = B;
        medio = C;
        maior = A;
    }
    else if ((C <= A) && (C <= B) && (A <= B))
    {
        menor = C;
        medio = A;
        maior = B;
    }
    else if ((C <= A) && (C <= B) && (B <= A))
    {
        menor = C;
        medio = B;
        maior = A;
    }

    printf("Antes da Ordenacao: %d %d %d\n", A, B, C);
    printf("Depois da Ordenacao: %d %d %d\n", menor, medio, maior);

    return 0;
}