/*
QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3^4 = 81,
podemos então afirmar que log381 = 4.
Generalizando, temos que:
baseexpoente = pot  logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada
do logaritmo.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
int logaritmo(int base, int potencia);

// Main
int main()
{
    // Declaração de Variáveis
    int base, potencia, resultado;

    // Solicitando a Base
    printf("Infome a Base do Logaritmo: ");
    scanf("%d", &base);

    // Solicitando a Potência
    printf("Informe a Potencia do Logaritmo: ");
    scanf("%d", &potencia);

    // Chamando a Função
    resultado = logaritmo(base, potencia);

    printf("Log%d %d = %d ", base, potencia, resultado);
}

int logaritmo(int base, int potencia)
{
    int i, result = 0;

    for (i = base; i != 1; i /= potencia)
    {
        result++;
    }

    return result;
}