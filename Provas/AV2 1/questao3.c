/*
Considere a existência de dois vetores:
Notas: contendo as notas de um aluno;
Pesos: armazenando o peso de cada nota.

Implementar uma função que, dado estes dois
vetores, calcule a média ponderada do aluno:
*/

#include <stdio.h>

float mediaPonderada(float notas[], float pesos[], int tamanho);

int main()
{
    int tamanho, i;
    float resultado;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &tamanho);

    float notas[tamanho];
    float pesos[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("Peso %d: ", i + 1);
        scanf("%f", &pesos[i]);
    }

    resultado = mediaPonderada(notas, pesos, tamanho);

    printf("Media Ponderada: %.2f", resultado);
}

float mediaPonderada(float notas[], float pesos[], int tamanho)
{
    int i;
    float soma_produtos = 0;
    float soma_pesos = 0;

    for (i = 0; i < tamanho; i++)
    {
        soma_produtos += notas[i] * pesos[i];
        soma_pesos += pesos[i];
    }

    return soma_produtos / soma_pesos;
}