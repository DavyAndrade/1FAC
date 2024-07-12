/*
Desenvolver uma Função que determine o maior
multiplo de N existente no intervalo definido
pelos números a e b, inclusive.
*/

#include <stdio.h>
#include <limits.h>

int maiorMultiplo(int n, int a, int b);

int main()
{
    int num, inferior, superior, result;

    printf("Entre com N: ");
    scanf("%d", &num);

    printf("Entre com o intervalo: ");
    scanf("%d %d", &inferior, &superior);

    result = maiorMultiplo(num, inferior, superior);

    printf("Maior multiplo de %d no intevalo %d/%d: %d", num, inferior, superior, result);
}

int maiorMultiplo(int n, int a, int b)
{
    int i;
    int maior = INT_MIN;

    for (i = a; i <= b; i++)
    {
        if (i % n == 0)
        {
            maior = i;
        }
    }

    return maior;
}