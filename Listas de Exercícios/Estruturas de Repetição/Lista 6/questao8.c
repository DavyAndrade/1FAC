/*
QUESTÃO 08: Faça um programa que leia
um número real x e um número inteiro y.
Em seguida, o programa deve ler 100
números reais e calcular quantos destes
estão no intervalo definido por [x-y,x+y].
*/

#include <stdio.h>
#define TAM 5

int main()
{
    int i, x, y, num, contIntervalo = 0;

    printf("\nInforme o valor de X: ");
    scanf("%d", &x);


    printf("\nInforme o valor de Y: ");
    scanf("%d", &y);


    for (i = 1; i <= TAM; i++)
    {
        printf("\nInsira um numero [%d]: ", i);
        scanf("%d", &num);

        if ((num >= x - y) && (num <= x + y))
        {
            contIntervalo++;
        }
    }

    printf("\nQuantia de valores no intervalo: %d\n", contIntervalo);
}