/*
QUESTÃO 06: Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.
*/

#include <stdio.h>

int main() {
    int i, a, b, c, temp;

    printf("Entre com tres valores: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("1 - Ordem Crescente\n");
    printf("2 - Ordem Decrescente\n");
    printf("3 - O Maior no Meio\n");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &i);

    switch (i) {
        case 1:
        if (a > b) {
        temp = a;
        a = b;
        b = temp;
        }

        if (a > c) {
        temp = a;
        a = c;
        c = temp;
        }

        if (b > c) {
        temp = b;
        b = c;
        c = temp;
        }
        printf("%d %d %d", a, b, c);
        break;

        case 2: 
        if (a < b) {
        temp = a;
        a = b;
        b = temp;
        }

        if (a < c) {
        temp = a;
        a = c;
        c = temp;
        }

        if (b < c) {
        temp = b;
        b = c;
        c = temp;
        }

        printf("%d %d %d", a, b, c);
        break;
        
        case 3:
        if (a > b) {
        temp = a;
        a = b;
        b = temp;
        }
        if (a > c) {
        temp = a;
        a = c;
        c = temp;
        }
        if (b > c) {
        temp = b;
        b = c;
        c = temp;
        }

        printf("%d %d %d", a, c, b);
        break;
    }

}