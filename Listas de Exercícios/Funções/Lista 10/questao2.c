/*
QUESTÃO 02:
Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
void pot(int a, int b, int *quant, int *maiorValor);

// Main
int main()
{
    // Declaração de Variáveis
    int inferior, superior, maior, cont;

    // Pedindo o Intervalo
    printf("Entre com um intervalo: ");
    scanf("%d %d", &inferior, &superior);

    // Chamando a Função
    pot(inferior, superior, &cont, &maior);

    // Exibindo os resultados
    printf("\nQuantidade de Potencias no Intervalo (%d, %d): %d", inferior, superior, cont);
    printf("\nMaior Valor: %d", maior);
}

// Funções
void pot(int a, int b, int *quant, int *maiorValor)
{
    // Declaração de Vairiáveis
    int i, maior = a, cont = 0;

    // Varrendo as potências até B
    for (i = 1; i <= b; i *= 2)
    {
        // Incrementando as potências maiores que a
        if (i >= a)
        {
            cont++;
        }

        // Atualizando o maior valor
        maior = i;
    }

    // Atribuindo os valores obtidos para a saída de dados
    *maiorValor = maior;
    *quant = cont;
}