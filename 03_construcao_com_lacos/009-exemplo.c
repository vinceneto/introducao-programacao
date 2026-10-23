#include <stdio.h>

int main()
{
    int numero;
    int n1, n2, n3;
    int casos = 0;
    int total = 216; // 6 x 6 x 6 = 216
    float probabilidade;

    printf("Digite um numero entre 3 e 18: ");
    scanf("%d", &numero);

    if(numero >= 3 && numero <= 18)
    {
        for(n1 = 1; n1 <= 6; n1++) {
            for(n2 = 1; n2 <= 6; n2++) {
                for(n3 = 1; n3 <= 6; n3++) {
                    if( n1 + n2 + n3 == numero)
                    {
                       casos++; 
                    }            
                }
            }
        }
                        // casting
        probabilidade = ((float)casos / total) * 100.0;
        printf("A probabilidade de sair %d eh de %.2f%%.\n", 
            numero, probabilidade);
    }    
    else
    {
        printf("Numero Invalido.\n");
    }




    return 0;
}