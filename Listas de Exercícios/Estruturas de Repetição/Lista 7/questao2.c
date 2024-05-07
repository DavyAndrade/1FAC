/*
QUESTÃO 02: Um fazendeiro realizou um
tratamento sobre sua plantação de café
que gerou um crescimento constante de C
% em sua produção, por ano.
Considerando que atualmente sua
produção anual seja de M u.p.,
implementar um programa que determine
a quantidade de anos necessária para que
a produção duplique.
*/

#include <stdio.h>

int main()
{
    float crescimento;
    int prodAnual, anos = 0;

    printf("Informe a porcentagem de crescimento constante: ");
    scanf("%f", &crescimento);

    printf("Producao Anual: ");
    scanf("%d", &prodAnual);

    crescimento /= 100;

    while (prodAnual < (prodAnual * 2))
    {
        prodAnual += (prodAnual * crescimento);
        anos++;
    }

    printf("Anos Necessarios: %d\n", anos);
}