/*
QUESTÃO 04: Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.
*/

#include <stdio.h>
#define QUANT 300

int main()
{
    int quantNeg = 0, quantPos = 0, i, num, somaPos = 0;

    for (i = 1; i <= QUANT; i++)
    {
        printf("Entre com um numero: ");
        scanf("%d", &num);

        if (num > 0)
        {
            somaPos = somaPos + num;
            quantPos++;
        }

        if (num < 0)
        {
            quantNeg++;
        }
    }

    printf("\nQuantidade de Negativos: %d", quantNeg);
    printf("\nMedia dos Positivos: %.1f", (float)somaPos / quantPos);
}