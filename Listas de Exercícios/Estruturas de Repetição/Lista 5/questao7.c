/*
QUESTÃO 07:
Desenvolver um programa no qual o
usuário entre com vários números inteiros
e positivos e imprima o produto dos
números ímpares e a soma dos números
pares.
*/

#include <stdio.h>

int main()
{
    int num, somaPares = 0, prodImpares = 1;

    do
    {
        printf("\nEntre com um numero inteiro positivo: ");
        scanf("%d", &num);

        if (num > 0)
        {
            if (num % 2 == 0)
            {
                somaPares += num;
            }
            else
            {
                prodImpares *= num;
            }
        }

    } while (num > 0);

    printf("\nSoma dos Numeros Pares = %d", somaPares);
    printf("\nProduto dos Numeros Impares = %d", prodImpares);
}