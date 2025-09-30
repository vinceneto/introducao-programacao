#include <stdio.h>

int main()
{
    char ch;
    printf("Digite um simbolo de pontuacao: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case '.':  
            printf("Ponto.\n"); 
            break;
        case ',':
            printf("Virgula.\n");
            break;
        case ':':
            printf("Dois Pontos.\n");
            break;
        case ';':
            printf("Ponto e Virgula.\n");
            break;
        default:
            printf("Nao eh uma pontuacao.\n");
    }
    return 0;
}