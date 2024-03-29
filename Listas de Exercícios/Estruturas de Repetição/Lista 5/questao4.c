/*
QUESTÃO 04:
Implementar um programa que exiba os N
primeiros termos de uma PA (Progressão
Aritmética) com primeiro termo a1 e razão
r.
*/

#include <stdio.h>

int main()
{
    int i, n, a1, razao;

    printf("\nInforme o valor de N: ");
    scanf("%d", &n);

    printf("\nInforme o primeiro termo da PA: ");
    scanf("%d", &a1);

    printf("\nInforme o razao da PA: ");
    scanf("%d", &razao);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", a1);
        }
        else
        {
            a1 = a1 + razao;
            printf("%d ", a1);
        }
    }
}