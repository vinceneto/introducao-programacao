#include <stdio.h>

int main()
{
    int i = 0; // interador - expr_inicial
    while(i < 10) // critério de parada - expr_booleana 
    {
        printf("%d ", i);
        i++; //i = i + 1;
        // i += 2; //i = i + 2;
        // i -= 2; //i = i - 2;
        // i *= 2; //i = i * 2;
        // i /= 2; //i = i / 2;
    }
    return  0;
}