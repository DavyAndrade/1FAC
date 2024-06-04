/*
QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
float conversao(int C);

// Main
void main()
{
    // Declaração de Variáveis
    int celsius;
    float result;

    // Solicitando a Temperatura em Celsius
    printf("Informe a Temperatura (C): ");
    scanf("%d", &celsius);

    // Atribuindo o Retorno da Função de Conversão para 'result'
    result = conversao(celsius);

    // Exibindo o Resultado
    printf("\n%d C = %.1f F\n", celsius, result);
}

// Funções
float conversao(int C)
{
    // Declaração de Variáveis
    float fahrenheit;

    // Convertendo para Fahrenheit
    fahrenheit = (C * 1.8) + 32;

    // Retornando a Conversão
    return fahrenheit;
}