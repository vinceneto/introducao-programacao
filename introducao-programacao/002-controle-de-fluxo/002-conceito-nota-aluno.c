#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota;

    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);

    if(nota >= 9) {
        printf("CONCEITO: A\n");
    }
    else if(nota >= 7) {
        printf("CONCEITO: B\n");
    }
    else if (nota >= 5) {
        printf("CONCEITO: C\n");
    }
    else  {
        printf("CONCEITO: D\n");
    }

    return 0;
}