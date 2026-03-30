#include <stdio.h>

int main()
{
    int item, quantidade;
    float valor_total;
    printf("\t== CARDAPIO ==\n\n");
    printf("ITEM\tDESCRICAO\tPREÇO\n");
    printf("1.\tCachorro Quente\tR$4.00\n");
    printf("2.\tX - Salada\tR$4.50\n");
    printf("3.\tX - Bacon\tR$5.00\n");
    printf("4.\tTorrada Simples\tR$2.00\n");
    printf("5.\tRefrigerante\tR$1.50\n");
    printf("\nDigite o numero do item: ");
    scanf("%d", &item);

    if (item >= 1 && item <=5)
    {
        printf("Digite a quantidade do item selecionado: ");
        if(item == 1)
        {
            scanf("%d", &quantidade);
            valor_total = (float)quantidade * 4.00;
        } 
        else if (item == 2)
        {
            scanf("%d", &quantidade);
            valor_total = (float)quantidade * 4.50;  
        }
        else if (item == 3)
        {
            scanf("%d", &quantidade);
            valor_total = (float)quantidade * 5.00;  
        }
        else if (item == 4)
        {
            scanf("%d", &quantidade);
            valor_total = (float)quantidade * 2.00;
        }
        else if (item == 5)
        {
            scanf("%d", &quantidade);
            valor_total = (float)quantidade * 1.50;
        }
        printf("O valor total da compra = R$ %.2f\n", valor_total);  
    }
    else
    {
        printf("Item não existente!\n");
    }    

    return 0;
}