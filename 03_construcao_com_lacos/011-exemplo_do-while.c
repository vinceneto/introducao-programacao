#include <stdio.h>

int main()
{
    int contador = 1;

    do
    {
        printf("%d ", contador);
        contador++; // contador = contador + 1
    } while(contador <= 10); // Verdadeiro: Retorna, Falso: Sai
    

    return 0;
}