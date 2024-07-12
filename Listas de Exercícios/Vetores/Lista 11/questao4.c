/*
QUESTÃO 04:
Fazer uma função que armazene em um vetor
os 50 auxs termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...

Nota: observem que a diferença entre o 1o e 2o
elementos é igual a 1, entre o 2o e 3o é igual a
2, entre o 3o e o 4o é igual a 3, e assim
sucessivamente.
*/

#include <stdio.h>
#define TAM 50

void gerarSequencia(int vet[], int tamanho);

int main()
{
    int vetor[TAM] = {0};
    int i;

    gerarSequencia(vetor, TAM);

    for (i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void gerarSequencia(int vet[], int tamanho)
{
    int i;
    int aux = 1;

    for (i = 0; i < tamanho; i++)
    {
        aux += i;
        vet[i] = aux;
    }
}