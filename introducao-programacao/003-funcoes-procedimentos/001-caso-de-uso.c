#include <stdio.h>

//Declaração das Funções
void saudacao();
void imprime_soma(int a, int b);
int multiplica(int a, int b);
int fatorial(int n);

int main()
{
    saudacao();

    imprime_soma(5, 10);

    int produto = multiplica(4, 3);
    printf("Produto: %d\n", produto);

    int resultado_fatorial = fatorial(5);
    printf("Fatorial de 5: %d\n", resultado_fatorial);

    return 0;
}

//Definição das Funções
void saudacao()
{
    printf("Bem-vindo ao mundo das funcoes!\n");
}

void imprime_soma(int a, int b)
{
    printf("Soma: %d\n", a + b);
}

int multiplica(int a, int b)
{
    return a * b;
}

int fatorial(int n)
{
    if(n == 0){
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}