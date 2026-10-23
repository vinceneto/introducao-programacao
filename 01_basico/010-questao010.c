#include <stdio.h>

int main()
{
    float salario1, salario2;
    
    scanf("%f", &salario1);
    scanf("%f", &salario2);

    printf("Pessoa 1 ganha mais que Pessoa 2?: %d\n", salario1 > salario2);
    printf("Pessoa 1 ganha menos que Pessoa 2?: %d\n", salario1 < salario2);
    printf("Os salários são iguais?: %d\n", salario1 == salario2);
    printf("A diferença entre os salários é de quanto?: %.2f\n", salario1 - salario2);

    return 0;
}