/*
QUESTÃO 03:
Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e
altura, utilizando as seguintes fórmulas:
 para homens: (72.7*h)-58
 para mulheres: (62.1*h)-44.7
*/

// Importação de Bibliotecas
#include <stdio.h>

// Main
int main()
{
    // Declaração de Variáveis
    int genero;
    float pesoIdeal, altura;

    // Slicitando o Gênero
    printf("Informe seu genero: \n\n1 - Masculino\n2 - Feminino\n\n");
    scanf("%d", &genero);

    // Lendo a Altura
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    // Verificando o Gênero e calculando o Peso Ideal
    if (genero == 1)
    {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Peso Ideal: %.2fkg", pesoIdeal);
    }
    else if (genero == 2)
    {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Peso Ideal: %.2fkg", pesoIdeal);
    }

    // Retornando o Erro
    else
    {
        printf("Insira um valor valido para genero!!");
    }
}