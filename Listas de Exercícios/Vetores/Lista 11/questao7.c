/*
QUESTÃO 07:
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.
*/

#include <stdio.h>

int removerValor(float vet[], int *tamanho, float num);

int main()
{
    int i, quant, tamanho = 5;
    float vetor[5] = {1.0, 1.5, 2.0, 2.0, 2.5};
    float elemento = 2.0;

    quant = removerValor(vetor, &tamanho, elemento);

    printf("Foi removido %d valor(es) do vetor!\n", quant);
    for (i = 0; i < tamanho; i++)
    {
        printf("%.1f ", vetor[i]);
    }
}

int removerValor(float vet[], int *tamanho, float num)
{
    int i, j, cont = 0;

    for (i = 0; i < *tamanho; i++)
    {
        if (vet[i] == num)
        {
            for (j = i; j < *tamanho; j++)
            {
                vet[j] = vet[j + 1];
            }
            cont++;
            (*tamanho)--;
            i--;
        }
    }

    return cont;
}