#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois numeros pares: ");
    scanf("%d %d", &a, &b);

    if ((a % 2 == 0) && (b % 2 == 0))
    {
        printf("Os dois numeros sao pares.\n");
        
    }
    

    return 0;
}