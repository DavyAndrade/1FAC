/*
Questão 02:
Considere o problema que, dados os valores de A e B e
N números inteiros lidos, espere determinar a média
dos valores compreendidos entre A e B (inclusive),
assim como a quantidade de números inferiores a A e a
soma daqueles superiores a B.
Pede-se o desenvolvimento de três versões do
programa que resolva o problema apresentado, cada
um utilizando uma estrutura de repetição diferente
(for, while e do..while).
*/

#include <stdio.h>

// DO WHILE
int main()
{
    int n, a, b, num;
    int somaMaiorB = 0, contMenorA = 0, quantM = 0, i = 1;
    float mediaNumeros;

    printf("Informe o valor de A e B: ");
    scanf("%d %d", &a, &b);

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if (num < a)
        {
            contMenorA++;
        }

        if (num > b)
        {
            somaMaiorB += num;
        }

        if ((num >= a) && (num <= b))
        {
            mediaNumeros += num;
            quantM++;
        }

        i++;

    } while (i <= n);

    mediaNumeros /= quantM;

    printf("\nMedia dos Numeros entre A e B: %.1f\n", mediaNumeros);
    printf("Quantidade de Valores Menores que A: %d\n", contMenorA);
    printf("Soma dos Numeros Maiores que B: %d\n", somaMaiorB);
}