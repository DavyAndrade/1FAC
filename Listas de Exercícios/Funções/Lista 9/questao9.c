/*
QUESTÃO 09:
Implementar uma função que, dado um
número inteiro, calcule (e retorne) a soma e a
média de seus divisores.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
void calcularSomaMedia(int n, int *soma, float *media);

// Main
int main()
{
    // Declaração de Variáveis
    int num, soma;
    float media;

    // Lendo N
    printf("\nEntre com um Numero: ");
    scanf("%d", &num);

    // Chamando a Função
    calcularSomaMedia(num, &soma, &media);

    // Exibindo o Resultado
    printf("\nSoma dos Divisores de %d: %d", num, soma);
    printf("\nMedia dos Divisores de %d: %.1f", num, media);
}

// Funções
void calcularSomaMedia(int n, int *soma, float *media)
{
    // Declaração de Variáveis
    int i, somatorio = 0, contador = 0;

    // Percorrendo de 1 até 'n'
    for (i = 1; i <= n; i++)
    {
        // Verificando se 'n' é divisivel por 'i', somando e incrementando
        if (n % i == 0)
        {
            somatorio += i;
            contador++;
        }
    }

    // Atribuindo o valor de Soma e Media
    *soma = somatorio;
    *media = somatorio / contador;
}