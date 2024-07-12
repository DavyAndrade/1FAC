/*
QUESTÃO 08:
Dados um vetor de reais (cujos elementos
estão ordenados crescentemente) e um
número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou
a posição na qual deveria estar (caso contrário).
*/

#include <stdio.h>
#define TAM 5

int returnPos(float vet[], int tamanho, int x);

int main()
{
    float vetor[TAM] = {1.1, 2.1, 4.4, 8.8, 16};
    float X = 18;

    int result = returnPos(vetor, TAM, X);

    printf("%.1f na posicao %d ", X, result);
}

int returnPos(float vet[], int tamanho, int x)
{
    int i;

    for (i = tamanho - 1; i >= 0; i++)
    {
        if (vet[i] == x)
        {
            return i;
            break;
        }
        else if (vet[i] < x)
        {
            return i;
            break;
        }
        else
        {
            return tamanho - 1;
        }
    }
}