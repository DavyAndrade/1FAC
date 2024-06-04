/*
QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
int exibirMultiplos(int n, int a, int b);

// Main
void main()
{
    // Declarando Variáveis
    int num, inferior, superior;

    // Solicitando N
    printf("Entre com um numero: ");
    scanf("%d", &num);

    // Solicitando o Intervalo
    printf("Insira um intervalo: ");
    scanf("%d %d", &inferior, &superior);

    // Chamando a Função
    exibirMultiplos(num, inferior, superior);
}

// Funções
int exibirMultiplos(int n, int a, int b)
{
    // Declaração de Variáveis
    int i;

    // Varrendo os Multiplos de N e Exibindo
    for (i = a; i <= b; i++)
    {
        if (i % n == 0)
        {
            printf("%d ", i);
        }
    }
}