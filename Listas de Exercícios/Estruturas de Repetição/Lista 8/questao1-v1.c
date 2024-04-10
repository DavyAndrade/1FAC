/*
Questão 01:
Dados três números inteiros a, b e c,
implementar um programa que exiba os
números do intervalo definido por a e b
(sempre começando em a e terminando em b),
com exceção daqueles que sejam múltiplos de
c.
Exemplos:
a = 10, b = 20, c = 3
Saída: 10, 11, 13, 14, 16, 17, 19, 20
a = 25, b = 18, c = 5
Saída: 24, 23, 22, 21, 19, 18
Nota: devem ser apresentadas três versões do
programa, uma para cada estrutura de
repetição estudada.
*/

#include <stdio.h>


// UTILIZANDO FOR
int main()
{
    int i, a, b, c;

    printf("\nInforme o valor de A: ");
    scanf("%d", &a);

    printf("\nInforme o valor de B: ");
    scanf("%d", &b);

    printf("\nInforme o valor de C: ");
    scanf("%d", &c);

    if (b > a)
    {
        for (i = a; i <= b; i++)
        {
            if (i % c != 0)
            {
                printf("%d ", i);
            }
        }
    }

    else
    {
        for (i = a; i >= b; i--)
        {
            if (i % c != 0)
            {
                printf("%d ", i);
            }
        }
    }
}