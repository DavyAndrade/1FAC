/*
QUESTÃO 07:
Desenvolver um programa no qual o
usuário entre com vários números inteiros
e positivos e imprima o produto dos
números ímpares e a soma dos números
pares.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int num, somaPares = 0, prodImpares = 1;
    char opcao;

    do
    {
        printf("\nEntre com um numero inteiro positivo: ");
        scanf("%d", &num);
        fflush(stdin);

        if (num % 2 == 0)
        {
            somaPares += num;
        }
        else
        {
            prodImpares *= num;
        }

        printf("Deseja Continuar? [S/N]: ");
        scanf("%c", &opcao);
        opcao = toupper(opcao);

    } while (opcao == 'S');

    printf("\nSoma dos Numeros Pares: %d", somaPares);
    printf("\nProduto dos Numeros Impares: %d", prodImpares);
}