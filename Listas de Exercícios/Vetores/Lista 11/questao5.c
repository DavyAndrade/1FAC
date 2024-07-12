/*
QUESTÃO 05:
Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define TAM 300

void organizaVetor(int valores[], int impares[], int pares[], int tamanho, int *par, int *impar);

int main()
{
    int i, tamPar, tamImpar;
    int valores[TAM];
    int impares[TAM] = {0};
    int pares[TAM] = {0};

    for (i = 0; i < TAM; i++)
    {
        valores[i] = rand() % 100;
    }

    organizaVetor(valores, impares, pares, TAM, &tamPar, &tamImpar);

    printf("\nConjunto de Pares:\n");
    for (i = 0; i < tamPar; i++)
    {
        printf("%d ", pares[i]);
    }

    printf("\n\nConjunto de Impares:\n");
    for (i = 0; i < tamImpar; i++)
    {
        printf("%d ", impares[i]);
    }

    getch();
}

void organizaVetor(int valores[], int impares[], int pares[], int tamanho, int *par, int *impar)
{
    int i;
    *par = 0;
    *impar = 0;

    for (i = 0; i < tamanho; i++)
    {
        if (valores[i] % 2 == 0)
        {
            pares[*par] = valores[i];
            (*par)++;
        }
        else
        {
            impares[*impar] = valores[i];
            (*impar)++;
        }
    }
}