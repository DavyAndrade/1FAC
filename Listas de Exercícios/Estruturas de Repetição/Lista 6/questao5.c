/*
QUESTÃO 05: Elabore um programa que
calcule a média ponderada de n elementos.
Observação: na média ponderada, cada
elemento possui um peso que representa a
sua contribuição no cálculo da média final.
*/

#include <stdio.h>

int main()
{
    int i, n, peso, somaPeso = 0;
    float nota, somaNotas = 0;

    printf("\nInforme o valor de N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nNota [%d]: ", i);
        scanf("%f", &nota);

        printf("Peso [%d]: ", i);
        scanf("%d", &peso);

        somaPeso += peso;
        somaNotas += nota * peso;
    }

    printf("Media Ponderada: %.1f", (somaNotas / somaPeso));
}