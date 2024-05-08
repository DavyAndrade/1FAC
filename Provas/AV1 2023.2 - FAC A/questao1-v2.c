/*
Considere o problema que consiste em exibir todos
os múltiplos de um número n existentes no intervalo
de valor1 a valor2, assim como a média destes
múltiplos.
Desenvolver três programas para a solução do
problema apresentado, um para cada estrutura de
repetição estudada no curso.
Nota:
1. n, valor1 e valor2 são números inteiros
fornecidos pelo usuário;
2. Devem ser apresentados 3 arquivos para a
solução desta questão.
*/

/*
Considere o problema que consiste em exibir todos
os múltiplos de um número n existentes no intervalo
de valor1 a valor2, assim como a média destes
múltiplos.
Desenvolver três programas para a solução do
problema apresentado, um para cada estrutura de
repetição estudada no curso.
Nota:
1. n, valor1 e valor2 são números inteiros
fornecidos pelo usuário;
2. Devem ser apresentados 3 arquivos para a
solução desta questão.
*/

#include <stdio.h>

// WHILE
int main()
{
    int valor1, valor2, n, i, aux;
    int somaMult = 0, contMult = 0;

    printf("Informe dois valores: ");
    scanf("%d %d", &valor1, &valor2);

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    // Determinando o Valor Inicial do Intervalo
    if (valor1 > valor2)
    {
        aux = valor1;
        valor1 = valor2;
        valor2 = aux;
    }

    printf("\n");

    i = valor1;

    while (i <= valor2)
    {
        if (i % n == 0)
        {
            printf("%d ", i);
            somaMult += i;
            contMult++;
        }
        i++;
    }

    printf("\nMedia dos Multiplos: %.1f", (float)somaMult / contMult);
}