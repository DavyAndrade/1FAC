/*
QUESTÃO 01:
Faça um programa que, dadas duas datas (cada
qual com dia, mês e ano) fornecidas pelo
usuário, determine qual delas é a mais recente.
*/

#include <stdio.h>

int main()
{
    int d1, m1, a1, d2, m2, a2, data1, data2;

    printf("Insira a Primeira Data (DD MM AAAA): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Insira a Segunda Data (DD MM AAAA): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    data1 = d1 + (m1 * 30) + (a1 * 365) + (a1 / 4);
    data2 = d2 + (m2 * 30) + (a2 * 365) + (a2 / 4);

    if (data1 > data2)
    {
        printf("Data Mais Recente: %d/%d/%d", d1, m1, a1);
    }
    else
    {
        printf("Data Mais Recente: %d/%d/%d", d2, m2, a2);
    }
}