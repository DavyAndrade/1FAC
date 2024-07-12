/*
QUESTÃO 11:
Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na intersecção dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.
*/

#include <stdio.h>
#define TAM 5

int intersecao(int vetA[], int vetB[], int vetC[], int tamanho);

int main()
{
    int i;
    int vetA[TAM] = {2, 4, 8, 16, 32};
    int vetB[TAM] = {2, 4, 6, 8, 10};
    int vetC[TAM] = {0};

    int tamC = intersecao(vetA, vetB, vetC, TAM);

    printf("Intersecao do Vetor A e B:\n");
    for (i = 0; i < tamC; i++)
    {
        printf("%d ", vetC[i]);
    }
}

int intersecao(int vetA[], int vetB[], int vetC[], int tamanho)
{
    int i, j, cont = 0;

    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho; j++)
        {
            if (vetA[i] == vetB[j])
            {
                vetC[i] = vetA[i];
                cont++;
            }
        }
    }

    return cont;
}