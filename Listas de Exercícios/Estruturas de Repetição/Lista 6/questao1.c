/*
QUESTÃO 01: Faça um programa que leia
um número inteiro x e, em seguida, solicite
ao usuário outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
múltiplos de x fornecidos.
*/

#include <stdio.h>
#define TAM 50

int main()
{
    int x, i, num, cont = 0;

    printf("Informe o valor de X: ");
    scanf("%d", &x);
    fflush(stdin);

    for (i = 1; i <= TAM; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        fflush(stdin);

        if (num % x == 0)
        {
            cont++;
        }
    }

    printf("\nQuantidade de Multiplos de X: %d", cont);
}