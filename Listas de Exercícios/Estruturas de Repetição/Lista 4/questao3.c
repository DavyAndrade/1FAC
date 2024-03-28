/*
QUESTÃO 03: Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.
*/

#include <stdio.h>

int main()
{
    float rendimento = 0, quantia, taxa;
    int i, tempo;

    printf("\nQuantia Investida: ");
    scanf("%f", &quantia);

    printf("\nTaxa de Rendimento: ");
    scanf("%f", &taxa);

    printf("\nTempo de Rendimento (em anos): ");
    scanf("%d", &tempo);

    tempo = tempo * 12;
    taxa = taxa / 100;

    for (i = 1; i <= tempo; i++)
    {
        rendimento += (quantia * taxa);
    }

    quantia += rendimento;

    printf("Valor na conta apos %d meses de rendimento: %.2f", tempo, quantia);
}