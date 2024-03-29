/*
QUESTÃO 09:
Escrever um programa que encontre o
quinto número maior que 1000, cuja
divisão por 11 tenha resto 5.
*/

#include <stdio.h>

int main()
{
    int cont = 0, num = 1000;

    while (cont != 5)
    {
        num++;

        if (num % 11 == 5)
        {
            cont++;
        }
    }

    printf("\nResposta: %d", num);
}