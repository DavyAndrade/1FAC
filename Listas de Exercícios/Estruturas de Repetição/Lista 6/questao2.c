/*
QUESTÃO 02: Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido.
*/

#include <stdio.h>

int main()
{
    int i, n, num, maiorValor = 0, menorValor = 100;

    printf("\nInforme o valor de N: ");
    scanf("%d", &n);
    fflush(stdin);

    for (i = 1; i <= n; i++)
    {
        printf("\nEntre com um numero [%d]: ", i);
        scanf("%d", &num);
        fflush(stdin);

        if (num > maiorValor)
        {
            maiorValor = num;
        }

        if (num < menorValor)
        {
            menorValor = num;
        }
    }
    printf("\nMaior valor encontrado: %d", maiorValor);
    printf("\nMenor valor inserido: %d", menorValor);
}