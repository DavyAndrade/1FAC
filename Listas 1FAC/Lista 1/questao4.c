/*
QUESTÃO 04:
Um banco concederá um crédito especial aos
seus clientes, variável com o saldo médio no
último ano. Faça um algoritmo que calcule o
valor do crédito de acordo com a tabela abaixo.
Saldo Médio Percentual
Inferior a R$ 1000,00 nenhum crédito
De R$ 1000,00 a
R$ 1499,99 20% do saldo médio
De R$ 1500,00 a
R$ 2499,99 30% do saldo médio
R$ 2500,00 ou mais 40% do saldo médio
*/

#include <stdio.h>

int main() {
    float saldoMedio;

    printf("Entre com o saldo medio: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio < 1000) {
        printf("Credito: 00 Reais");
    } 
    else if (saldoMedio <= 1499.99) {
        printf("Credito: %.2f Reais", saldoMedio*0.2);
    }
    else if (saldoMedio <= 2499.99) {
        printf("Credito: %.2f Reais", saldoMedio*0.3);
    }
    else {
        printf("Credito: %.2f Reais", saldoMedio*0.4);
    }
}