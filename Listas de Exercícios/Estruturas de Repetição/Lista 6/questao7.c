/*
QUESTÃO 07: Faça um programa que leia
150 números reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor número do 51° ao 100°
valores fornecidos;
c) A média entre os últimos 50
valores.
*/

#include <stdio.h>
#define TAM 150

int main()
{
    int i, soma50Primeiros = 0, num, menorNum = 100, soma50Ultimos = 0;

    for (i = 1; i <= TAM; i++)
    {
        printf("Insira o numero [%d]: ", i);
        scanf("%d", &num);
        fflush(stdin);

        if (i <= 50)
        {
            soma50Primeiros += num;
        }
        else
        {
            if ((i <= 100) && (num < menorNum))
            {
                menorNum = num;
            }
            else
            {
                if (i <= TAM)
                {
                    soma50Ultimos += num;
                }
            }
        }
    }

    printf("Soma dos 50 Primeiros: %d\n", soma50Primeiros);
    printf("Menor Numero no Intervalo de 51 a 100: %d\n", menorNum);
    printf("Media dos Valores de 101 a 150: %.1f\n", ((float)soma50Ultimos / 50));
}