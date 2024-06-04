/*
QUESTÃO 02:
Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.
*/

#include <stdio.h>

int pot(int a, int b);

int main()
{
    int inferior, superior;

    printf("Entre com um intervalo: ");
    scanf("%d %d", &inferior, &superior);

    pot(inferior, superior);
}

int pot(int a, int b)
{
    int i, maiorValor = a, cont = 0;

    for (i = 1; i <= b; i *= 2)
    {
        if (i >= a)
        {
            cont++;
        }

        if (i > maiorValor)
        {
            maiorValor = i;
        }
    }

    printf("\nPotencias Existentes no Intervalo: %d", cont);
    printf("\nMaior Potencia: %d\n", maiorValor);
}