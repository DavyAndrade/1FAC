/*
QUESTÃO 03:
Fazer um programa que exiba todos os
divisores de um número fornecido pelo
usuário.
*/

#include <stdio.h>

int main()
{
    int i, num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
}