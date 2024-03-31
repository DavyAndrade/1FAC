/*
QUESTÃO 06: Faça um programa que leia
200 números inteiros. Ao final, exibir:
a) O maior número fornecido, de
ordem par (isto é, o maior dentre o
segundo, quarto, sexto, oitavo, etc
valores fornecidos).
b) A média dos valores pares.
*/

#include <stdio.h>
#define TAM 200

int main()
{
    int i, maiorPar = 0, somaPares = 0, num;

    for (i = 1; i <= TAM; i++)
    {
        printf("\nInsira um numero [%d]: ", i);
        scanf("%d", &num);
        fflush(stdin);

        if (num % 2 == 0)
        {
            somaPares += num;
        }

        if ((num % 2 == 0) && (num > maiorPar))
        {
            maiorPar = num;
        }
    }

    printf("\nSoma dos Pares: %d\n", somaPares);
    printf("Maior Numero Fornecido na Ordem Par: %d\n", maiorPar);
}