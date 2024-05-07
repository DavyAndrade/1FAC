/*
Questão 04:
Na matemática, dois números são chamados de
primos entre si quando o seu único divisor em
comum é a unidade (ou seja, o número 1).
Considerando este conceito, implementar um
programa que, dados dois números inteiros,
determine se são ou não primos entre si.
*/

#include <stdio.h>

int main()
{
    int n1, n2, aux;

    // Solicita ao usuário os números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    // Calcula o máximo divisor comum (MDC) entre os dois números
    int a = n1, b = n2;

    while (b != 0)
    {
        aux = b;
        b = a % b;
        a = aux;
    }

    // Verifica se os números são primos entre si
    if (a == 1)
    {
        printf("%d e %d sao primos entre si.\n", n1, n2);
    }
    else
    {
        printf("%d e %d nao sao primos entre si.\n", n1, n2);
    }

    return 0;
}
