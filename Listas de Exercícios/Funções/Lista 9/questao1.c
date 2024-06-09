/*
QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
void exibirMultiplos(int n, int a, int b);

// Main
int main()
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
void exibirMultiplos(int n, int a, int b)
{
    // Declaração de Variáveis
    int i;

    // Percorrendo o intervalo a, b
    for (i = a; i <= b; i++)
    {
        // Exibindo os Múltiplos de N
        if (i % n == 0)
        {
            printf("%d ", i);
        }
    }
}