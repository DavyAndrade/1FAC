/*
QUESTÃO 09:
Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar).
*/

#include <stdio.h>
#define TAM 5

void inserirNum(int vet[], int tamanho, int num);

int main()
{
    int vetor[TAM] = {1, 2, 4, 8, 16};
    int i, numero = 18;

    inserirNum(vetor, TAM, numero);

    for (i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void inserirNum(int vet[], int tamanho, int num)
{
    int i;

    for (i = tamanho - 1; i >= 0; i--)
    {
        if (vet[i] == num)
        {
            vet[i] = num;
            break;
        }
        else if (vet[i] < num)
        {
            vet[i] = num;
            break;
        }
    }
}