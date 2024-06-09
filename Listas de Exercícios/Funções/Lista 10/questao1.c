/*
QUESTÃO 01:
Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
void exibirNumeros(int n, int a, int b);

// Main
int main()
{
    // Declaraçãoo de Variáveis
    int num, inferior, superior;

    // Solicitando um número
    printf("Entre com um numero: ");
    scanf("%d", &num);

    // Pedindo o intervalo
    printf("Entre com um intervalo: ");
    scanf("%d %d", &inferior, &superior);

    // Chamando a função
    exibirNumeros(num, inferior, superior);
}

// Funções
void exibirNumeros(int n, int a, int b)
{
    // Declaração de Variáveis
    int i;

    // Varrendo os números dentro do intervalo a, b
    for (i = a; i <= b; i++)
    {
        // Exibindo os números não múltiplos de n
        if (i % n != 0)
        {
            printf("%d ", i);
        }
    }
}