#include <stdio.h>

int main()
{
    int senha, senhaCorreta = 1234;
    int tentativas = 0, limite = 3;

    do
    {
        printf("Digite a senha numerica: ");
        scanf("%d", &senha);

        tentativas++;

        if(senha == senhaCorreta)
        {
            printf("Acesso Autorizado.\n");
        }
        else
        {
            printf("Senha Incorreta.\n");

            if(tentativas < limite) printf("Tentativas restantes: %d\n", limite - tentativas);
        }
    } while(senha != senhaCorreta && tentativas < limite);

    if(senha != senhaCorreta)
    {
        printf("Numero maximo de tentativas atingido.\n");
        printf("Acesso bloqueado.\n");
    }

    return 0;
}