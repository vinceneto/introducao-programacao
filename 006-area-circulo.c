#include <stdio.h>
#define PI 3.14159 // Declaração de Constantes


int main()
{   
    double raio, area;
    //double PI = 3.14159; // Declaração de Constantes

    // Entrada de Dados
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    //Processamento
    area = PI * (raio * raio);

    // Saída de Dados
    printf("A = %.4f\n", area);

    
    return 0;
}