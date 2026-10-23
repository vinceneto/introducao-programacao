// 23 – Validação de senha: Elabore um programa que solicite uma senha numérica previamente definida no código. O usuário deverá continuar tentando até informar a senha correta. Ao acertar, o programa deverá apresentar uma mensagem de acesso autorizado.

#include <stdio.h>

int main()
{
    int senha, senhaCorreta = 1234;

    do
    {
        printf("Digite a senha numerica: ");
        scanf("%d", &senha);

        if(senha != senhaCorreta)
        {
            printf("Senha Incorreta! Tente novamente.\n");
        }

    } while(senha != senhaCorreta);

    printf("Acesso autorizado!\n");

    return 0;
}