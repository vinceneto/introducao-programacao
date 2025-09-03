#include <stdio.h>
#include <locale.h>

int main()
{
    int numero;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero > 0)
    {
        printf("O número %d é positivo.\n", numero);
    } else if (numero < 0)
    {
        printf("O número %d é negativo.\n", numero);
    } else
    {
        printf("O número é zero.\n");
    }
    return 0;
}