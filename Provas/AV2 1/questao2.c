/*
Fazer uma função que, dado um número inteiro
positivo n, determine o seu maior e menor
algarismos.

Nota, caso N seja positivo, a função realizará
o solicitado e retornará 1; caso contrário,
apenas retornará 0.
*/

#include <stdio.h>
#include <limits.h>

int algarismos(int n, int *maior, int *menor);

int main()
{
    int num, maior, menor;

    printf("Entre com um numero positivo: ");
    scanf("%d", &num);

    algarismos(num, &maior, &menor);

    if (algarismos(num, &maior, &menor) == 1)
    {
        printf("Maior Algarismo de %d: %d\n", num, maior);
        printf("Menor Algarismo de %d: %d\n", num, menor);
    }
    else
    {
        printf("O numero nao e positivo!");
    }
}

int algarismos(int n, int *maior, int *menor)
{
    int algarismo;
    *maior = INT_MIN;
    *menor = INT_MAX;

    if (n < 0)
    {
        return 0;
    }

    while (n > 0)
    {
        algarismo = n % 10;

        if (algarismo > *maior)
        {
            *maior = algarismo;
        }

        if (algarismo < *menor)
        {
            *menor = algarismo;
        }

        n /= 10;
    }

    return 1;
}