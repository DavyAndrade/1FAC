/*
Questão 03:
Desenvolver um programa que, dado um número
inteiro N, exiba todas as combinações possíveis com 3
valores, todos no intervalo de 1 a N, de forma que cada
elemento da combinação seja inferior ou igual ao
seguinte, conforme ilustrado no exemplo abaixo:
N = 3
Combinações:
1 1 1
1 1 2
1 1 3
1 2 2
1 2 3
1 3 3
2 2 2
2 2 3
2 3 3
3 3 3
*/

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    printf("\nCombinacoes:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
}