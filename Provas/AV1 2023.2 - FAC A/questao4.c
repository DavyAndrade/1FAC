/*
Questão 04:
Solicita-se o desenvolvimento de um programa que
leia n valores inteiros, onde n também é fornecido
pelo usuário.
Ao final, o programa deve informar se os valores, na
ordem na qual foram informados, representam uma
Progressão Aritmética (PA).
Nota: uma PA consiste em uma sequência de
valores iniciada por a1 (primeiro termo) e cada
novo termo é calculado a partir da soma do
anterior com um número especial e constante para
a sequência, chamado razão da PA.
*/

#include <stdio.h>

int main()
{

    int i, n, a1, razao, num, valor_anterior;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    printf("Informe o Primeiro Termo: ");
    scanf("%d", &a1);

    printf("Informe a Razao da PA: ");
    scanf("%d", &razao);

    valor_anterior = a1;

    for (i = 1; i < n; i++)
    {
        printf("Informe o Termo Seguinte: ");
        scanf("%d", &num);

        if (num != valor_anterior + razao)
        {
            printf("Os valores NAO representam uma PA\n");
            return 0;
        }
        valor_anterior = num;
    }

    printf("Os valores representam uma PA\n");
}