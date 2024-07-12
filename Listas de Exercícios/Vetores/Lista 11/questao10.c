/*
QUESTÃO 10:
Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.
*/

#include <stdio.h>
#define TAM 5

int conjunto(int vetA[], int vetB[], int vetC[], int tamanho);

int main()
{
    int i;
    int vetA[TAM] = {2, 4, 8, 16, 32};
    int vetB[TAM] = {2, 4, 6, 8, 10};
    int vetC[20] = {0};

    int tamC = conjunto(vetA, vetB, vetC, TAM);

    printf("Conjunto do Vetor A e B:\n");
    for (i = 0; i < tamC; i++)
    {
        printf("%d ", vetC[i]);
    }
}

int conjunto(int vetA[], int vetB[], int vetC[], int tamanho)
{
    int i, cont = 0;

    for (i = 0; i < tamanho; i++)
    {
        vetC[cont] = vetA[i];
        cont++;
    }

    for (i = 0; i < tamanho; i++)
    {
        if (vetC[i] != vetB[i])
        {
            vetC[cont] = vetB[i];
            cont++;
        }
    }

    return cont;
}