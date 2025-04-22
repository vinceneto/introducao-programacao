#include <stdio.h>

int main()
{
    //Variável de controle
    int contador = 0;

    while(contador <= 10)
    {  
        printf("%d ", contador);
        //atualiza variável de controle
        // contador++; //contador = contador + 1
        // contador = contador + 2;
        contador += 2;
    }
    
    return 0;
}