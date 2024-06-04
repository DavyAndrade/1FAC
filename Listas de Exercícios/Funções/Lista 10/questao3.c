/*
QUESTÃO 03:
Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.
*/

#include <stdio.h>
#include <limits.h>

float leituraDados();

int main()
{
    leituraDados();
}

float leituraDados()
{
    float num, maiorNum = INT_MIN;
    int cont = 0;

    while (num != 0)
    {
        printf("Entre com um numero: ");
        scanf("%f", &num);

        if (num != 0)
        {
            cont++;

            if (num > maiorNum)
            {
                maiorNum = num;
            }
        }
    }

    printf("\nQuantidade de Valores Fornecidos: %d\n", cont);
    printf("Maior valor: %.1f\n", maiorNum);
}