/*
Questão 03:
Desenvolver um programa que leia dois
números inteiros n1 e n2 e determine se n2
consiste em n1 com seus algarismos
embaralhados.
Nota: considerar que não existem algarismos
repetidos no mesmo número.
*/

#include <stdio.h>

int main()
{
    int n1, n2;

    // Solicita ao usuário os números inteiros n1 e n2
    printf("Digite n1: ");
    scanf("%d", &n1);

    printf("Digite n2: ");
    scanf("%d", &n2);

    // Conta a quantidade de cada dígito em n1
    while (n1 > 0)
    {
        int digito = n1 % 10;
        int temp_n2 = n2;
        int count = 0;

        // Conta quantas vezes o dígito aparece em n2
        while (temp_n2 > 0)
        {
            if (temp_n2 % 10 == digito)
            {
                count++;
            }
            temp_n2 /= 10;
        }

        // Se a contagem não for a mesma, os números não consistem em algarismos embaralhados
        if (count != 1)
        {
            printf("%d nao consiste em %d com seus algarismos embaralhados.\n", n2, n1);
        }

        n1 /= 10;
    }

    // Se o loop terminou sem retornar 0, então os números consistem em algarismos embaralhados
    printf("%d consiste em %d com seus algarismos embaralhados.\n", n2, n1);
}
