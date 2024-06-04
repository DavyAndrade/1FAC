/*
QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
int mmc(int n1, int n2);

// Main
void main()
{
    // Declaração de Variáveis
    int valor1, valor2, result;

    // Lendo o Primeiro Valor
    printf("Insira o Primeiro Valor: ");
    scanf("%d", &valor1);

    // Lendo o Segundo Valor
    printf("Insira o Segundo Valor: ");
    scanf("%d", &valor2);

    // Atribuindo o Retorno da Função MMC para 'result'
    result = mmc(valor1, valor2);

    // Exibindo o Resultado
    printf("\nMMC (%d, %d): %d", valor1, valor2, result);
}

// Funções
int mmc(int n1, int n2)
{
    // Declaração de Variáveis
    int i, produto, maior;

    // Verificando o maior valor entre 'n1' e 'n2'
    if (n1 > n2)
    {
        maior = n1;
    }
    else
    {
        maior = n2;
    }

    // Calculando o Produto
    produto = n1 * n2;

    // Variando do maior valor até o produto
    for (i = maior; i <= produto; i++)
    {
        // Verificando se 'n1' e 'n2' são múltiplos de 'i'
        if ((i % n1 == 0) && (i % n2 == 0))
        {
            // Retornando o MMC
            return i;
        }
    }
}