#include <stdio.h>

int main()
{
    char nome[] = "Vicente Neto";
    char estado_civil[] = "Casado";
    char naturalidade[] = "Amazonas";
    char nacionalidade[] = "Brasileiro";
    char sexo = 'M';
    int idade = 33;
    
    printf("\t\t>>>>>> FICHA CADASTRAL <<<<<<\n\n");
    printf("Nome de Usuario: %s\t\tEstado Civil: %s\n", nome, estado_civil);
    printf("Naturalidade: %s\t\tNacionalidade: %s\n", naturalidade, nacionalidade);
    printf("Sexo: %c\t\t\tIdade: %d\n\n", sexo, idade);


    return 0;
}