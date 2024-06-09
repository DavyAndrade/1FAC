/*
QUESTÃO 01:
O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.
*/

// Importação de Bibliotecas
#include <stdio.h>

// Main
void main()
{
    // Declaração de Variáveis
    float custoFabrica, distribuidor, impostos, custo;

    // Lendo o Custo de Fábrica
    printf("Entre com o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    // Lendo o Percentual do Distibuidor
    printf("Entre com a porcentagem do distribuidor: ");
    scanf("%f", &distribuidor);

    // Lendo o Percentual de Impostos
    printf("Entre com os impostos (porcentagem): ");
    scanf("%f", &impostos);

    // Calculando o Custo do Carro
    custo = custoFabrica + (custoFabrica * (distribuidor / 100)) + (custoFabrica * (impostos / 100));

    // Exibindo o Custo do Carro
    printf("Custo Total do Veiculo: %.2f", custo);
}