#include <stdio.h>

int main()
{
    char frase[100];

    printf("Digite uma frase qualquer: ");
    fgets(frase, 100, stdin);

    printf("\n%s", frase);
    return 0;
}