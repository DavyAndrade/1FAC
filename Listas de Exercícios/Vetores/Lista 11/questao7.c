/*
QUESTÃO 07:
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.
*/

#include <stdio.h>
#define TAM 5

int removerValor(float vet[], int tamanho, float N);

int main()
{
    int i, quant;
    float vetor[TAM] = {1.0, 1.5, 2.0, 2.0, 2.5};
    float elemento = 2.0;

    quant = removerValor(vetor, TAM, elemento);

    printf("Foi removido %d valor(es) do vetor!", quant);
}

int removerValor(float vet[], int tamanho, float N)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {

    }
}