#include <stdio.h>

//Procedimento
void calcula_area_retangulo(int largura, int altura)
{
    int area;
    area = largura * altura;
    printf("A area do retangulo eh: %d\n", area);
}

//Função
int calcula_area_retangulo_2(int largura, int altura)
{
    int area;
    area = largura * altura;
    return area;
}

int main()
{
    int l = 5, a = 10;
    int resultado;
    calcula_area_retangulo(l, a);
    resultado = calcula_area_retangulo_2(l, a);
    printf("%d", resultado);
    return 0;
}