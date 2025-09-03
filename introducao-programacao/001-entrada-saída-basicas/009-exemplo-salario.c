#include <stdio.h>

int main()
{
    int ID_funcionario;
    float horas_trabalhadas;
    float valor_hora;
    float calculo_salario;

    printf("Insira o ID do funcionario: ");
    scanf("%d", &ID_funcionario);
    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Insira o valor da hora\\trabalho: ");
    scanf("%f", &valor_hora);

    calculo_salario = valor_hora * horas_trabalhadas;

    printf("O funcionario de ID %d vai receber o salario R$ %.2f\n", ID_funcionario, valor_hora * horas_trabalhadas);
    // printf("ID: %d\n", ID_funcionario);
    // printf("Salario: %.2f", valor_hora * horas_trabalhadas);


    return 0;
}