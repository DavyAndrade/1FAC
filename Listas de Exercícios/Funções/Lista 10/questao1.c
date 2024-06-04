/*
QUESTÃO 01:
Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n.
*/

#include <stdio.h>

int exibirNumeros(int n, int a, int b);

int main()
{
    int num, inferior, superior;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    printf("Entre com um intervalo: ");
    scanf("%d %d", &inferior, &superior);

    exibirNumeros(num, inferior, superior);
}

int exibirNumeros(int n, int a, int b)
{
    int i;

    for (i = a; i <= b; i++)
    {
        if (i % n != 0)
        {
            printf("%d ", i);
        }
    }
}