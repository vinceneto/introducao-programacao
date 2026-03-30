#include <stdio.h>

int main()
{
    int A, B, C, D, E, acm = 0;

    printf("Digite um valor inteiro para A: ");
    scanf("%d", &A);
    printf("Digite um valor inteiro para B: ");
    scanf("%d", &B);
    printf("Digite um valor inteiro para C: ");
    scanf("%d", &C);
    printf("Digite um valor inteiro para D: ");
    scanf("%d", &D);
    printf("Digite um valor inteiro para E: ");
    scanf("%d", &E);

    if((A % 2) == 0) acm = acm + 1;
                    //  acm += 1;
                    // acm++; //contando de forma crescente de um e um
    if((B % 2) == 0) acm = acm + 1;
    if((C % 2) == 0) acm = acm + 1;
    if((D % 2) == 0) acm = acm + 1;
    if((E % 2) == 0) acm = acm + 1;
    
    printf("\n\nA quantidade de valores pares = %d\n", acm);

    return 0;
}
