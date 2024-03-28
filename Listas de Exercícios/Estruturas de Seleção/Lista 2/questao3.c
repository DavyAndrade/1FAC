/*
QUESTÃO 03: As vendas parceladas se
tornaram uma ótima opção para os lojistas que,
a cada dia, criam novas promoções para tentar
conquistar novos clientes. Faça um algoritmo
que permita ao lojista informar o preço do
produto e receber as seguintes informações:
a) O valor com 10% de desconto para
pagamento à vista;
b) O valor da prestação para parcelamento
sem juros, em 5x;
c) O valor da prestação para parcelamento
com juros, em 10x, com 20% de acréscimo
no valor do produto.
*/

#include <stdio.h>

int main()
{
    float preco;

    printf("Informe o valor do produto: ");
    scanf("%f", &preco);

    printf("\nTabela de Valores do Produto:\n");
    printf("Pagamento a Vista: %.2f\n", preco - (preco * 0.1));
    printf("Em 5x sem Juros: %.2f por mes\n", preco / 5);
    printf("Em 10x com Juros: %.2f por mes\n", (preco + (preco * 0.2)) / 10);
}