/*
Implementar uma função que, dado um vetor de
reais vet e um numero inteiro n, determine o
menor valor dentre aqueles maiores que n,
assim como o maior valor dentre os que são
menores que n.
*/

#include <stdio.h>
#include <float.h>

void determine(float vetor[], int n, int tam, float *maior, float *menor);

int main()
{
    int i, num, tamanho;
    float maior, menor;

    printf("Entre com N: ");
    scanf("%d", &num);

    printf("Entre com a quantidade de elementos: ");
    scanf("%d", &tamanho);

    float vet[tamanho];

    printf("Entre com os valores do vetor:\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vet[i]);
    }

    determine(vet, num, tamanho, &maior, &menor);

    printf("Maior valor menor que %d: %.1f\n", num, maior);
    printf("Menor valor maior que %d: %.1f\n", num, menor);
}

void determine(float vetor[], int n, int tam, float *maior, float *menor)
{
    int i;
    *menor = FLT_MAX;
    *maior = FLT_MIN;

    for (i = 0; i < tam; i++)
    {
        if (vetor[i] > n && vetor[i] < *menor)
        {
            *menor = vetor[i];
        }

        if (vetor[i] < n && vetor[i] > *maior)
        {
            *maior = vetor[i];
        }
    }
}