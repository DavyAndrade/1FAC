/*
QUESTÃO 03:
Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.
*/

// Importação de Bibliotecas
#include <stdio.h>
#include <float.h>

// Protótipo de Funções
void leituraDados(int *quant, float *maiorNum);

// Main
int main()
{
    // Declaração de Variáveis
    int quantidade;
    float maior;

    // Chamando a Função
    leituraDados(&quantidade, &maior);

    // Exibindo o Resultado
    printf("\nQuantidade de Numeros Fornecidos: %d\n", quantidade);
    printf("\nMaior Valor: %.1f\n", maior);
}

// Funções
void leituraDados(int *quant, float *maiorNum)
{
    // Declaração de Variáveis
    float num;

    // Inicializando as Saídas
    *quant = 0;
    *maiorNum = FLT_MIN;

    // Pedindo um número enquanto for diferente de 0
    do
    {
        // Pedindo Um número
        printf("Entre com um numero: ");
        scanf("%f", &num);

        // Incrementando a Quantidade e Mudando o Maior Valor
        if (num != 0)
        {
            (*quant)++;

            if (num > *maiorNum)
            {
                *maiorNum = num;
            }
        }
    } while (num != 0);
}