//1º passo: Incluir biblioteca padrão do C
#include <stdio.h>

//2º passo: Incluir a função principal
int main()
{
    // Declaração de variáveis
    // Inteiro:
    int idade, numero, x;
    int id_usuario = 0, tamanho1;

    // Atribuindo valores às variáveis
    idade = 34;
    numero = 100;
    x = 2;
    id_usuario = 201005080;
    tamanho1 = 44;
    numero = x;
    numero = numero + idade;

    // Reais
    float preco, altura, peso;
    double temperaturaCelsius, mediaAluno;
    
    // Atribuindo valores às variáveis
    preco = 29.99;
    altura = 1.71;
    peso = 80;
    temperaturaCelsius = 40;
    mediaAluno = 9.5;

    // Caracter:
    char caracter = 'a';
    char nome[50] = "Nome";

    return 0;
}

// Tipos de Comentários:

// Comentário individual se usa //

/*
    Comentário de
    múltiplas linhas
    se usam /* e * /
*/