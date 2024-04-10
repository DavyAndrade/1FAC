/*
QUESTÃO 10:
Foi feita uma pesquisa entre os habitantes
de uma região e coletados os dados de
altura e gênero das pessoas. Faça um
programa que leia as informações de 50
pessoas e informe:
 a maior e a menor alturas
encontradas;
 a média de altura das mulheres;
 a média de altura da população;
 o percentual de homens na
população.
*/

#include <stdio.h>
#include <ctype.h>

#define QUANT 50

int main()
{
    int i, contMas = 0, contFem = 0;
    float altura, alturaGeral = 0, maiorAltura = 0, menorAltura = 10, alturaMulheres = 0;
    char genero;

    for (i = 1; i <= QUANT; i++)
    {
        printf("\nGenero [M/F] (%d): ", i);
        scanf("%c", &genero);
        genero = toupper(genero);
        fflush(stdin);

        printf("\nAltura (%d): ", i);
        scanf("%f", &altura);
        fflush(stdin);

        if (altura > maiorAltura)
        {
            maiorAltura = altura;
        }

        if (altura < menorAltura)
        {
            menorAltura = altura;
        }

        if (genero == 'M')
        {
            contMas++;
        }

        if (genero == 'F')
        {
            contFem++;
            alturaMulheres += altura;
        }

        alturaGeral += altura;
    }

    printf("\nMenor Altura: %.2f", menorAltura);
    printf("\nMaior Altura: %.2f", maiorAltura);
    printf("\nMedia de Altura das Mulheres: %.2f", (alturaMulheres / contFem));
    printf("\nMedia de Altura da Populacao: %.2f", (alturaGeral / QUANT));
    printf("\nPercentual de Homens na Populacao: %.1f%%", ((float)contMas / QUANT) * 100);
}