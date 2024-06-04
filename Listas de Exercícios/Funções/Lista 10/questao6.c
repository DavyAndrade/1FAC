/*
QUESTÃO 06:
Desenvolver uma função que, dado um número
inteiro N, calcule o valor do seguinte
somatório:
S = 1 +
(n − 1)
1
1!
+
(n − 2)
2
2!
+
(n − 3)
3
3!
+ ⋯ +
1
n−1
(n − 1)!
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
int calcularFatorial(int num);
int somaFatoriais(int N);
int calcularPotencia(int n);

// Main
void main()
{
    int num;

    printf("\nInsira um Numero: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("O numero deve ser maior que 1!");
        return 1;
    }

    printf("%d", calcularPotencia(num));
    printf("\nSoma das fatoriais ate N-1: %d\n", somaFatoriais(num));
}

// Funções
int calcularPotencia(int n)
{
    int i, result = n;

    for (i = 1; i < n; i++)
    {
        result *= n;
    }

    return result;
}

int calcularFatorial(int num)
{
    if (num == 1)
        return 1;
    else
        return num * calcularFatorial(num - 1);
}

