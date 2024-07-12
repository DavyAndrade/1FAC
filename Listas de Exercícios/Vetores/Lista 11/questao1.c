/*
QUESTÃO 01:
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
int numOcorrencias(int vetor[], int tamVetor, int x);

// Main
int main()
{
    // Declaração de Variáveis
    int vetor[] = {1, 2, 3, 4, 5, 1, 1};
    int tamanhoVetor = 8;
    int cont, num = 1;

    cont = numOcorrencias(vetor, tamanhoVetor, num);

    printf("O numero %d aparece %d vezes no Vetor!", num, cont);
}

int numOcorrencias(int vetor[], int tamVetor, int x)
{
    int i, contador = 0;

    for (i = 0; i < tamVetor; i++)
    {
        if (vetor[i] == x)
        {
            contador++;
        }
    }

    return contador;
}
