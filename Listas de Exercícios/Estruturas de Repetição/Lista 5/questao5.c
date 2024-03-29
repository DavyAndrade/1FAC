/*
QUESTÃO 05:
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,...
*/

#include <stdio.h>

int main()
{
    int i, n, result;

    printf("\nInforme o valor de N: ");
    scanf("%d", &n);

    for (i = 1, result = 1; i <= n; i++)
    {
        printf("%d ", result);
        result = result + result;
    }
}