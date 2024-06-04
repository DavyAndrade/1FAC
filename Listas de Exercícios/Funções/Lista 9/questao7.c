/*
QUESTÃO 07:
Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.
Exemplo:
n = 6
a = 10 e b = 20
Resposta = 7 (pois os números 10, 12, 14,
15, 16, 18 e 20 possuem divisores em
comum com o número 6).
*/

// Importação de Bibliotecas
#include <stdio.h>

// Protótipo das Funções
int exibirDivisores(int n, int a, int b);

// Main
void main()
{
    // Declaração de Variáveis
    int num, inferior, superior, resultado;

    // Lendo N
    printf("Entre com N: ");
    scanf("%d", &num);

    // Lendo o Intervalo
    printf("Entre com um Intervalo: ");
    scanf("%d %d", &inferior, &superior);

    // Atribuindo o retorno da função chamada para a variável 'resultado'
    resultado = exibirDivisores(num, inferior, superior);

    // Exibindo o Resultado
    printf("\n%d possui %d divisores entre %d e %d", num, resultado, inferior, superior);
}

// Funções
int exibirDivisores(int n, int a, int b)
{
    // Declaração de Variáveis
    int i, j, cont = 0;

    // Percorrendo de 'a' até 'b'
    for (i = a; i <= b; i++)
    {
        // Percorrendo de 2 até 'i'
        for (j = 2; j <= i; j++)
        {
            // Verificando se 'i' e 'n' é divisivel por 'j' e incrementando
            if ((i % j == 0) && (n % j == 0)) 
            {
                cont++;
                break;
            }
        }
    }
    // Retornando o contador
    return cont;
}