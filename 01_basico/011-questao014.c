#include <stdio.h>

int main()
{
    int cartao, senhaValida = 123456, senha;
    
    scanf("%d", &cartao);
    scanf("%d", &senha);

    printf("Acesso permitido?: %d\n", (cartao == 1) && (senha == senhaValida));
    return 0;
}