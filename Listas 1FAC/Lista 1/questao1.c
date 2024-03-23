/*
QUESTÃO 01:
O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.
*/

#include <stdio.h>

void main() {
    float custoFabrica, distribuidor, impostos, custo;

    // pedindo valores
    printf("Entre com o custo de fabrica: ");
    scanf("%f", &custoFabrica);
    fflush(stdin);

    printf("Entre com a porcentagem do distribuidor: ");
    scanf("%f", &distribuidor);
    fflush(stdin);

    printf("Entre com os impostos (porcentagem): ");
    scanf("%f", &impostos);
    fflush(stdin);

    // calculando o custo do carro
    custo = custoFabrica + (custoFabrica*(distribuidor/100)) + (custoFabrica*(impostos/100));
    printf("Custo Total do Veiculo: %.2f", custo);
}