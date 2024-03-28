/*
QUESTÃO 05:
Escrever um algoritmo que, dada uma quantia
em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.
*/

#include <stdio.h>

int main() {
    int valor, N100, N50, N20, N10, N5, N2, M1, R100, R50, R20, R10, R5, R2,total;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    N100 = valor/100;
    R100 = valor%100;

    N50 = R100/50;
    R50 = R100%50;

    N20 = R50/20;
    R20 = R50%20;

    N10 = R20/10;
    R10 = R20%10;

    N5 = R10/5;
    R5 = R10%5;

    N2 = R5/2;
    M1 = R5%2;

    total = N100 + N50 + N20 + N10 + N5 + N2 + M1;

    printf("Menor valor a ser decomposto: %d\n", total);
}