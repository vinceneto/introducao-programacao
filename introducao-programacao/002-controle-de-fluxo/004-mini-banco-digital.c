#include <stdio.h>

int main()
{
    float saldo = 1000.0, valor;
    int opcao;

    printf("=== Bem-vindo ao Banco Digital C ===\n");
    printf("Saldo inicial: R$%.2f\n\n", saldo);

    printf("Escolha uma opcao:\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Deposito\n");
    printf("3 - Saque\n");
    printf("4 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Seu saldo atual e': R$%.2f\n", saldo);
    } else if (opcao == 2) {
        printf("Digite o valor do deposito: ");
        scanf("%f", &valor);

        if(valor > 0){
            saldo += valor;
            printf("Deposito realizado! Novo saldo: R$%.2f\n", saldo);
        } else {
            printf("Valor invalido para deposito!\n");
        }
    } else if (opcao == 3) {
        printf("Digite o valor do saque: ");
        scanf("%f", &valor);

        if (valor > 0 && valor <= saldo){
            saldo -= valor;
            printf("Saque realizado! Novo saldo: R$%.2f\n", saldo);
        } else if (valor > saldo){
            printf("Saldo insuficiente!\n");
        } else {
            printf("Valor invalido para saque!\n");
        }
    } else if (opcao == 4){
        printf("Saindo do sistema... Ate logo!\n");
    } else {
        printf("Opcao Invalida!\n");
    }

    return 0;
}