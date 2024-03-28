/*
QUESTÃO 05: O cardápio de uma lanchonete é
o seguinte:
Especificação Código Preço
Cachorro quente 100 3,50
Bauru simples 101 4,50
Bauru com ovo 102 5,20
Hamburger 103 3,00
Cheeseburger 104 4,00
Refrigerante 105 2,50
Escrever um algoritmo que obtenha o código
do item pedido, a quantidade e calcule o valor
a ser pago.
Considere que, a cada execução do algoritmo,
somente será calculado o valor relacionado a
um item.
*/

#include <stdio.h>

int main()
{
    int codigo, quantidade;

    printf("100 - Cachorro Quente: 3.50R$\n");
    printf("101 - Bauru Simples: 4.50R$\n");
    printf("102 - Bauru com Ovo: 5.20R$\n");
    printf("103 - Hamburger: 3.00R$\n");
    printf("104 - Cheeseburguer: 4.00R$\n");
    printf("105 - Refrigerante: 2.50R$\n\n");

    printf("Escolha um pedido: ");
    scanf("%d", &codigo);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 100:
        printf("\nValor Total do Pedido: %.2fR$", quantidade * 3.50);
        break;

    case 101:
        printf("\nValor Total do Pedido: %.2fR$", quantidade * 4.50);
        break;

    case 102:
        printf("\nValor Total do Pedido: %.2fR$", quantidade * 5.20);
        break;

    case 103:
        printf("\nValor Total do Pedido: %dR$", quantidade * 3);
        break;

    case 104:
        printf("\nValor Total do Pedido: %dR$", quantidade * 4);
        break;

    case 105:
        printf("\nValor Total do Pedido: %.2fR$", quantidade * 2.5);
        break;

    default:
        printf("Codigo de Produto Invalido!");
    }
}