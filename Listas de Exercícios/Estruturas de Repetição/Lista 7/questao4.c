/*
QUESTÃO 04: Faça um programa que leia
um número inteiro N e informe se o
mesmo é ou não primo.
Nota: um número é dito primo quando for
divisível apenas por 1 e por ele mesmo.
*/

#include <stdio.h>

int main()
{
    int n, i, divisores = 0;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisores++;
        }
    }

    if (divisores == 2)
    {
        printf("Numero Primo: Sim");
    }
    else
    {
        printf("Numero Primo: Nao");
    }
}