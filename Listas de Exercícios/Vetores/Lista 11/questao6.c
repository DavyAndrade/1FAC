/*
QUESTÃO 06:
Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.
*/

#include <stdio.h>
#define TAM 5

void alterarValor(float vet[], int tamanho, float A, float B);

int main()
{
    int i;
    float vetor[TAM] = {1.1, 1.4, 2.0, 2.5, 2.0};
    float X = 2.0;
    float Y = 4.0;

    alterarValor(vetor, TAM, X, Y);

    for (i = 0; i < TAM; i++)
    {
        printf("%.1f ", vetor[i]);
    }
}

void alterarValor(float vet[], int tamanho, float A, float B)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        if (vet[i] == A)
        {
            vet[i] = B;
        }
    }
}