// 20 – Número secreto: Desenvolva um programa no qual um número inteiro secreto seja previamente definido no código. O usuário deverá tentar descobrir esse número, recebendo mensagens que indiquem se cada tentativa foi maior ou menor que o valor secreto. O programa deverá continuar solicitando tentativas até que o número seja descoberto

#include <stdio.h>

int main()
{
    int numero, numeroSecreto = 2468;

    while (1)
    {
        printf("Digite o numero secreto: ");
        scanf("%d", &numero);

        if(numero < numeroSecreto) printf("Menor que o numero secreto.\n");
        else if(numero > numeroSecreto) printf("Maior que o numero secreto.\n");
        else break;
    }

    printf("Parabens, voce acertou o numero secreto!!!\n");
    
    return 0;
}