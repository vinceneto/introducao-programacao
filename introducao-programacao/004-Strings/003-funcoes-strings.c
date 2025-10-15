#include <stdio.h>
#include <string.h>

int main()
{
    // char str1[100], str2[100];
    // printf("Digite seu nome: ");
    // setbuf(stdin, NULL);
    // fgets(str1, 100, stdin);

    // // Tamanho da String
    // printf("Tamanho da String 1: %d", strlen(str1) - 1);

    // // Copiando uma String
    // strcpy(str2, str1);
    // printf("\nString 1: %s", str1);
    // printf("\nString 2: %s", str2);

    // Concatenando duas Strings
    char str1[10] = "dia";
    char str2[10] = "dia";
    //strcat(str1, str2);
    //printf("%s\n", str1);
    //printf("%d\n", strlen(str1));
    if(strcmp(str1, str2) == 0) printf("Strings Iguais.\n");
    else printf("Strings Diferentes.\n");

    return 0;
}