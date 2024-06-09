/*
QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
int fibonacci(int n);

// Main
int main()
{
    // Declaração de Varíaveis
    int termo, result;

    // Solicitando o Termo Desejado pelo Usuário
    printf("Termo Fibonnaci Desejado: ");
    scanf("%d", &termo);

    // Atribuindo o Retorno da Função Fibonnaci para 'result'
    result = fibonacci(termo);

    // Exibindo o Resultado
    printf("Elemento Desejado: %d\n", result);
}

// Funções
int fibonacci(int n)
{
    // Declaração de Variáveis
    int i, ant1 = 1, ant2 = 1, result;

    // Verificando se o Termo Desejado é o Primeiro ou o Segundo
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {

        // Calculando a Partir do Terceiro Termo ao Termo N
        for (i = 3; i <= n; i++)
        {
            result = ant1 + ant2;
            ant1 = ant2;
            ant2 = result;
        }
    }

    // Retornando o Termo N
    return result;
}