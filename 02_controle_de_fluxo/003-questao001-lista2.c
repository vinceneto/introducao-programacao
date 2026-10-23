#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if(x >= 0) printf("Positivo\n");
    else if(x <= 0) printf("Negativo\n");
    else printf("Igual a Zero\n");
    return 0;
}