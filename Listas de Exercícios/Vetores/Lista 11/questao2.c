/*
QUESTÃO 02:
Implementar uma função que, dado um vetor
de reais, troque o 1 e o 2 elementos, em
seguida o 3 e o 4 elementos e assim
sucessivamente, até se chegar ao final do vetor.
*/

#include <stdio.h>
#define TAM 5

void trocaValores(int vet[], int tamanho);

int main()
{
    int valores[TAM] = {1, 2, 3, 4, 5};
    int i;

    trocaValores(valores, TAM);

    for (i = 0; i < TAM; i++)
    {
        printf("%d ", valores[i]);
    }
}

void trocaValores(int vet[], int tamanho)
{
    int i, aux;

    for (i = 0; i < tamanho; i++)
    {
        if (i % 2 == 1)
        {
            aux = vet[i];
            vet[i] = vet[i - 1];
            vet[i - 1] = aux;
        }
    }
}