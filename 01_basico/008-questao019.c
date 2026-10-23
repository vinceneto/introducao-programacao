#include <stdio.h>

int main()
{
    float valorIngressoNormal = 30.00;
    float valorIngressoMeia = 15.00;
    float totalCompra;
    int idade, qtde_ingressoNormal, qtde_ingressoMeio;

    scanf("%d", &idade);
    scanf("%d", &qtde_ingressoNormal);
    scanf("%d", &qtde_ingressoMeio);

    totalCompra = (qtde_ingressoNormal * valorIngressoNormal) + (qtde_ingressoMeio * valorIngressoMeia);
    
    printf("Total da Compra: R$ %.2f\n", totalCompra);
    printf("A idade e' compativel para meia entrada? %d\n", idade < 18); 

    return 0;
}