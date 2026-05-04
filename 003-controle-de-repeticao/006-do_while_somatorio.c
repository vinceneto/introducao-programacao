#include <stdio.h>

int main()
{
    int num, soma = 0;

    do
    {
        printf("Digite um numero (negativo para parar): ");
        scanf("%d", &num);

        if(num >= 0)
            soma = soma + num; //soma += num;
            
    } while (num >= 0);

    printf("Soma total: %d\n", soma);
    
    return 0;
}