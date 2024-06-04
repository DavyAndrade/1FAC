/*
QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3^4 = 81,
podemos então afirmar que log381 = 4.
Generalizando, temos que:
baseexpoente = pot  logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo.
*/

#include <stdio.h>

int logaritmo(int a, int b);

int main()
{
    int base, potencia;

    printf("Infome a Base do Logaritmo: ");
    scanf("%d", &base);

    printf("Informe o Potencia do Logaritmo: ");
    scanf("%d", &potencia);

    logaritmo(base, potencia);
}

int logaritmo(int a, int b)
{
    int i, result = 0;

    for (i = b; i != 1; i /= a)
    {
        result++;
    }

    printf("\nLog%d %d = %d", a, b, result);
}