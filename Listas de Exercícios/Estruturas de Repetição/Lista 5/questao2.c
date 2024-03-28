/*
QUESTÃO 02:
Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.
*/

#include <stdio.h>

int main()
{
    int i, n, soma = 0;

    printf("\nInforme o valor de N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("\nSoma dos Numeros de 1 a %d: %d\n", n, soma);
}