/*
QUESTÃO 08:
Desenvolver uma função que exiba todos os
números primos inferiores a determinado valor
inteiro N.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
void exibirPrimos(int n);

// Main
int main()
{
    // Declaração de Variáveis
    int num;

    // Lendo N
    printf("Entre com N: ");
    scanf("%d", &num);

    // Chamando a Função
    exibirPrimos(num);
}

// Funções
void exibirPrimos(int n)
{
    // Declaração de Variáveis
    int i, j, divisores;

    // Percorrendo de 2 até N
    for (i = 2; i < n; i++)
    {

        // Inicializando os Divisores como 0 toda vez que o For concluir
        divisores = 0;

        // Percorrendo de 1 até 'i'
        for (j = 1; j <= i; j++)
        {
            // Contabilizando quantos divisores 'i' possui
            if (i % j == 0)
            {
                divisores++;
            }
        }

        // Verificando se é um Número Primo e Exibindo
        if (divisores == 2)
        {
            printf("%d ", i);
        }
    }
}
