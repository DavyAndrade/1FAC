/*
QUESTÃO 02: Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
número de um planeta. Ao final, com auxílio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.
Número Planeta Gravidade Relativa g
1 Mercúrio 0,37
2 Vênus 0,88
3 Marte 0,38
4 Júpiter 2,64
5 Saturno 1,15
6 Urano 1,17
Para calcular o peso no planeta escolhido,
utilize a seguinte fórmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
*/

#include <stdio.h>

int main()
{
    int planeta;
    float peso;

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    printf("1 - Mercurio\n2 - Venus\n3 - Marte\n4 - Jupiter\n5 - Saturno\n6 - Urano\n\nEscolha um planeta: ");
    scanf("%d", &planeta);

    switch (planeta)
    {
    case 1:
        printf("\nPeso em Mercurio: %.2fkg", (peso / 10) * 0.37);
        break;

    case 2:
        printf("\nPeso em Venus: %.2fkg", (peso / 10) * 0.88);
        break;

    case 3:
        printf("\nPeso em Marte: %.2fkg", (peso / 10) * 0.38);
        break;

    case 4:
        printf("\nPeso em Jupiter: %.2fkg", (peso / 10) * 2.64);
        break;

    case 5:
        printf("\nPeso em Saturno: %.2fkg", (peso / 10) * 1.15);
        break;

    case 6:
        printf("\nPeso em Urano: %.2fkg", (peso / 10) * 1.17);
        break;

    default:
        printf("Insira um planeta valido!");
    }
}