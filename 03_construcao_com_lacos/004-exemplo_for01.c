#include <stdio.h>

int main()
{
    int i; // iterador

    // for(i = 0; i < 10; i += 2)
    // for(i = 10; i > 0; i--)
    for(;;)
    {
        printf("Digite um numero inteiro diferente de zero: ");
        scanf("%d", &i);
        if(i == 0)
        {
            break;
        }
    }
    return 0;
}