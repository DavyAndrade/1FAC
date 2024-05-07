/*
Questão 02:
Construir um programa que, dado um número
inteiro n fornecido pelo usuário, exiba uma
sequência de elementos, distribuídos em
linhas, como nos exemplos a seguir:
Exemplos:
N = 7
1 0 0 0 0 0 0
2 1 0 0 0 0 0
3 2 1 0 0 0 0
4 3 2 1 0 0 0
5 4 3 2 1 0 0
6 5 4 3 2 1 0
7 6 5 4 3 2 1

N = 4

1 0 0 0
2 1 0 0
3 2 1 0
4 3 2 1
*/

#include <stdio.h>

#include <stdio.h>

int main()
{

    int n, i, j, k;

    // Solicita ao usuário o número inteiro n
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    // Loop para cada linha da sequência
    for (i = 1; i <= n; i++)
    {

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        for (k = 1; k <= n - i; k++)
        {
            printf("0 ");
        }

        printf("\n");

    }
}