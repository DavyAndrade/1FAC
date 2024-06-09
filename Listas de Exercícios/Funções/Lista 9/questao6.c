/*
QUESTÃO 06:
Implementar uma função que, dado um
número inteiro N, exiba uma sequência de
números como as ilustradas nos exemplos a
seguir:
Exemplo 1: N = 3
(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)
Exemplo 2: N = 5
(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1)
(3 2) (3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5
3) (5 4)
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
void exibirSequencia(int n);

// Main
int main()
{
    // Declaração de Variáveis
    int num;

    // Lendo o Numero
    printf("Insira um numero: ");
    scanf("%d", &num);

    // Chamando a Função
    exibirSequencia(num);
}

// Funções
void exibirSequencia(int n)
{
    // Declaração de Variáveis
    int i, j;

    // Variando de 'i' até N
    for (i = 1; i <= n; i++)
    {
        // Variando de 'j' até N
        for (j = 1; j <= n; j++)
        {
            // Verificando se 'i' e 'j' são distintos e exibindo
            if (i != j)
            {
                printf("(%d, %d) ", i, j);
            }
        }
    }
}