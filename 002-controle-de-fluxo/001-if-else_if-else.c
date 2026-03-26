#include <stdio.h>

int main()
{
    int x;
    printf("Insira um valor inteiro: ");
    scanf("%d", &x);

    if(x > 100)
    {
        printf("O valor %d e' MAIOR que 100.\n", x);
    }
    else if (x < 100)
    {
        printf("O valor %d e' MENOR que 100.\n", x);
    }
    else
    {
       printf("O valor %d e' IGUAL a 100.\n", x); 
    }

    return 0;
}