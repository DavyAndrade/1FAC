/*
QUESTÃO 06:
Desenvolver uma função que, dado um número
inteiro N, calcule o valor do seguinte
somatório:
S = 1 +
(n − 1)
1
1!
+
(n − 2)
2
2!
+
(n − 3)
3
3!
+ ⋯ +
1
n−1
(n − 1)!
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções


// Main
void main()
{
    // Declaração de Variáveis
    int num;

    // Pedindo o Número
    printf("\nInsira um Numero: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("O numero deve ser maior que 1!");
        return 1;
    }
}

// Funções

