/*
Fazer uma função que, dado um número inteiro
positivo n, determine se os seus algarismos
estão ou não ordenados crescentemente.
*/

#include <stdio.h>

int verificarAlgarismos(int n);

int main()
{
    int num, resultado;

    printf("Entre com N: ");
    scanf("%d", &num);

    resultado = verificarAlgarismos(num);

    if (resultado == 1)
    {
        printf("Os algarismos de %d estao ordenados crescentemente.\n", num);
    }
    else
    {
        printf("Os algarismos de %d nao estao ordenados crescentemente.\n", num);
    }
}
int verificarAlgarismos(int n)
{
    int ultimoDigito = n % 10;
    int digitoAtual;

    if (n < 10)
    {
        return 1;
    }

    while (n > 0)
    {
        digitoAtual = n % 10;
        n /= 10;

        if (digitoAtual > ultimoDigito)
        {
            return 0;
        }

        ultimoDigito = digitoAtual;
    }

    return 1;
}