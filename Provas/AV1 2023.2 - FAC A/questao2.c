/*

Questão 02:
Uma equação do segundo grau é representada pela
fórmula y = ax2

+ bx + c, onde a, b e c são

coeficientes da equação.
Pede-se a implementação de um programa que leia
estes coeficientes e, em seguida, exiba os valores de
y para x variando de -50 a 50.
*/

#include <stdio.h>

int main()
{
    int a, b, c, i, equacao;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("Informe o valor de C: ");
    scanf("%d", &c);

    for (i = -50; i <= 50; i++)
    {
        equacao = (a * (i * i)) + (b * i) + c;
        printf("\nValor de Y quando X=%d: %d \n", i, equacao);
    }
}