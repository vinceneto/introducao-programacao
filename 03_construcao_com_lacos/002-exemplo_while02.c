#include <stdio.h>

int main()
{
    int i = 0, valor;

    printf("Digite um valor inteiro:\n");
    while(i < 10)
    {
        printf("[%d]: ", i);
        scanf("%d", &valor);
        i++;
    }
    return 0;
}