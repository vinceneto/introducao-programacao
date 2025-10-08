#include <stdio.h>
#define TAMANHO 5

int main() {
    int vetor1[TAMANHO] = {1, 888, 3, 4, 5};
    int vetor2[TAMANHO];
    
    // Copiando elementos do vetor1 para o vetor2
    for (int i = 0; i < TAMANHO; i++) {
        vetor2[i] = vetor1[i];
    }
    // Imprimindo o vetor copiado
    printf("Vetor 2: [ ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("]");
}