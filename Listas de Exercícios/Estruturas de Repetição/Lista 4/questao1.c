/*
QUESTÃO 01: Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.
*/

#include <stdio.h>

int main()
{
    int i, n, y;

    printf("Insira N: ");
    scanf("%d", &n);

    printf("Insira Y: ");
    scanf("%d", &y);

    for (i = 1; (y * i) < n; i++)
    {
        printf("%d ", y * i);
    }
}