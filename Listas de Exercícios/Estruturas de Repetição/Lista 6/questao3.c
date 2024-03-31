/*
QUESTÃO 03: Implementar um programa
que calcule o valor de baseexpoente, onde
base e expoente são números inteiros
dados pelo usuário.
*/

#include <stdio.h>

int main()
{
    int i, base, expoente, potencia = 1;

    printf("\nInforme a Base: ");
    scanf("%d", &base);

    printf("\nInforme o Expoente: ");
    scanf("%d", &expoente);

    for (i = 1; i <= expoente; i++)
    {
        potencia *= base;
    }

    printf("%d ^ %d = %d", base, expoente, potencia);
}