/*
QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
int mdc(int n1, int n2);

// Main
void main()
{
    // Declaração de Variáveis
    int valor1, valor2, resultado;

    // Solicitando o Primeiro Valor
    printf("Primeiro Valor: ");
    scanf("%d", &valor1);

    // Solicitando o Segundo Valor
    printf("Segundo Valor: ");
    scanf("%d", &valor2);

    // Atribuindo o Retorno da Função MDC para result
    resultado = mdc(valor1, valor2);

    // Exibindo o Resultado
    printf("\nMDC (%d, %d) = %d\n", resultado);
}

// Funções
int mdc(int n1, int n2)
{
    // Declaração de Variáveis
    int i, menor, resultado;

    // Determinando o Menor Valor entre 'n1' e 'n2'
    if (n1 < n2)
    {
        menor = n1;
    }
    else
    {
        menor = n2;
    }

    // Verificando se 'i' é Divisor em Comum de 'n1' e 'n2'
    for (i = 1; i <= menor; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            resultado = i;
        }
    }

    // Retornando o Resultado
    return resultado;
}