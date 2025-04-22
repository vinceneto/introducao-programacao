#include <stdio.h>

int main()
{
    int i;          //iterador, contadora
    int acm = 0;    //acumuladora

    for(i = 0; i < 10; i++)
    {
        // atualização da variavel acumuladora
        acm = acm + i;
        printf("Valor de i: %d\t", i);
        printf("Valor acumulado: %d\n", acm);
    }
    

    return 0;
}