/*
QUESTÃO 06:
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,8,64,1024,...
*/

#include <stdio.h>

int main()
{
    int i, n, result = 1, mult = 1;

    printf("\nInforme o valor de N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++, mult *= 2)
    {
        printf("%d ", result);
        result = (result + result) * mult;
    }
}