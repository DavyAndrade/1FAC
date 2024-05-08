/*
Questão 03:
Faça um programa que leia dois valores inteiros, a e
b. Essa leitura deve ser repetida até que o usuário
forneça um valor de a que seja inferior a b.
Em seguida, o programa permanecerá solicitando
valores até que o usuário forneça um número
negativo.
Ao final, exibir:
1. O maior valor fornecido, dentre aqueles que
são menores do que a;
2. A média dos valores no intervalo de a a b
(inclusive);
3. A quantidade de números maiores do que b.
*/

#include <stdio.h>

int main()
{
    int a, b, num;
    int maiorValorA = -1, quantMaiorB = 0, somaNum = 0, quantNum = 0;

    do
    {

        printf("Informe o valor de A e B: ");
        scanf("%d %d", &a, &b);
        fflush(stdin);

    } while (a > b);

    do
    {

        printf("Informe um numero: ");
        scanf("%d", &num);

        // Item 1
        if ((num < a) && (num > maiorValorA))
        {
            maiorValorA = num;
        }

        // Item 2
        if ((num >= a) & (num <= b))
        {
            somaNum += num;
            quantNum++;
        }

        // Item 3
        if (num > b)
        {
            quantMaiorB++;
        }

    } while (num >= 0);

    // 1. O maior valor fornecido, dentre aqueles que são menores do que A
    printf("\nO maior valor fornecido menor que A: %d\n", maiorValorA);

    // 2. A média dos valores no intervalo de A a B
    printf("Media dos Valores no Intervalo A-B: %.1f\n", (float)somaNum / quantNum);

    // 3. A quantidade de números maiores do que B
    printf("A quantidade de numeros maiores que B: %d\n", quantMaiorB);
}