#include <stdio.h>
#define TAMANHO 5

int main()
{
    int vetor[TAMANHO];
    int elemento;
    int indice = -1, i;

    printf("Preencha o vetor com 5 valores inteiros:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor a ser buscado: ");
    scanf("%d", &elemento);

    // Buscando o elemento no vetor
    for(i = 0; i < TAMANHO; i++) {
        if(vetor[i] == elemento){
            indice = i;
            break;
        }
    }
    if(indice != -1){
        printf("Elemento encontrado no indice %d \n", indice);
    } else {
        printf("Elemento nao encontrado.\n");
    }

    return 0;
}