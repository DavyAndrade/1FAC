/*
QUESTÃO 03:
Implementar um programa que leia um valor
inteiro n1. Se este não estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usuário informando que o número é inválido e,
em seguida, a execução do programa terminará.
Caso o valor esteja no intervalo definido, o

programa deverá criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, porém em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
número inteiro positivo, com 3 algarismos. n2
também será um único número!
*/

#include <stdio.h>

int main()
{
    int n1, n2, dig1, dig2, dig3, temp;

    printf("Entre com um numero: ");
    scanf("%d", &n1);

    if ((n1 < 100) && (n1 > 999))
    {
        printf("Insira um valor entre 100 e 999!\n");
    }
    else
    {

        n2 = n1;

        dig1 = n2 / 100;
        dig2 = (n2 % 100) / 10;
        dig3 = n2 % 10;

        if (dig1 > dig2)
        {
            temp = dig1;
            dig1 = dig2;
            dig2 = temp;
        }

        if (dig1 > dig3)
        {
            temp = dig1;
            dig1 = dig3;
            dig3 = temp;
        }

        if (dig2 > dig3)
        {
            temp = dig2;
            dig2 = dig3;
            dig3 = temp;
        }

        n2 = (dig1 * 100) + (dig2 * 10) + dig3;

        printf("N1: %d\n", n1);
        printf("N2: %d\n", n2);
    }
}
