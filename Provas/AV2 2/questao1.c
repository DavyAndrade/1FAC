/*
Desenvolver uma função que, dado um número real
n, arredonde-o para o valor inteiro mais próximo.
*/

#include <stdio.h>

int arredondar(float n);

int main()
{
    float num;
    int result;

    printf("Entre com N: ");
    scanf("%f", &num);

    result = arredondar(num);

    printf("%d", result);
}

int arredondar(float n)
{
    int inteiro = (int)n;
    float decimal = n - inteiro;

    if (decimal < 0.5)
    {
        return inteiro;
    }
    else
    {
        return inteiro + 1;
    }
}