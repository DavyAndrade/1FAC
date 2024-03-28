/*
QUESTÃO 08:
Faça um algoritmo para calcular a conta final de
um hóspede de um hotel, considerando que:
a) Devem ser obtidos o nome do hóspede, o
tipo do apartamento utilizado (A, B, C ou D),
o número de diárias utilizadas pelo hóspede
e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela
seguinte tabela:
Tipo de Apartamento Valor da diária
A R$ 350,00
B R$ 275,00
C R$ 200,00
D R$ 150,00
c) O valor da taxa de serviço equivale a
10% da conta.
A conta a ser apresentada ao cliente deve
conter: o nome do hóspede, o tipo do
apartamento, o valor total das diárias, o
valor do consumo interno, o subtotal, o
valor da taxa de serviço e o total geral.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char nome[40], tipoAp;
    int numDiaria, consInterno, total, subTotal, taxa;

    // Requisitando as Informações
    printf("Nome: ");
    scanf("%s", &nome);
    fflush(stdin);

    printf("Tipo do Apartamento: ");
    scanf("%c", &tipoAp);
    tipoAp = toupper(tipoAp);
    fflush(stdin);

    printf("Quantidade de Diarias: ");
    scanf("%d", &numDiaria);
    fflush(stdin);

    printf("Consumo Interno: ");
    scanf("%d", &consInterno);
    fflush(stdin);

    // Calculando o Valor das Diárias
    switch (tipoAp)
    {
    case 'A':
        numDiaria = numDiaria * 350;
        break;

    case 'B':
        numDiaria = numDiaria * 275;
        break;

    case 'C':
        numDiaria = numDiaria * 200;
        break;

    case 'D':
        numDiaria = numDiaria * 150;
        break;
    }

    // Calculando os demais valores
    subTotal = numDiaria + consInterno;
    taxa = subTotal * 0.10;
    total = subTotal + taxa;

    // Exbibindo a Nota Fiscal
    printf("Nome: %s\n", nome);
    printf("Tipo de Apartamento: %c\n\n", tipoAp);

    printf("Valor Total das Diarias: %dR$\n", numDiaria);
    printf("Consumo Interno: %dR$\n", consInterno);

    printf("Subtotal: %dR$\n", subTotal);
    printf("Taxa de Servico: %dR$\n\n", taxa);
    printf("Total: %dR$\n\n", total);
}