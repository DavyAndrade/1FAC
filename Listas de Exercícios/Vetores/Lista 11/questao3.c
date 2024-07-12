/*
QUESTÃO 03:
Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.
*/

#include <stdio.h>
#include <float.h>
#define TAM 5

int verificaVetor(float vet[], int tamanho);

int main()
{
    float valores[TAM] = {1.1, 1.2, 2.2, 3.3, 4.4};
    int result;

    result = verificaVetor(valores, TAM);

    if (result == 1)
    {
        printf("Os valores estao ordenados crescentemente.\n");
    }
    else
    {
        printf("Os valores nao estao ordenados crescentemente.\n");
    }
}

int verificaVetor(float vet[], int tamanho)
{
    int i;
    float valorAnterior = FLT_MIN;

    for (i = 0; i < tamanho; i++)
    {
        if (vet[i] > valorAnterior)
        {
            valorAnterior = vet[i];
        }
        else
        {
            return 0;
        }
    }

    return 1;
}