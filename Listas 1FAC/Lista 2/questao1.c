/*
QUESTÃO 01: O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:
IMC = peso / altura2

Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:
IMC em adultos Condição
IMC < 18,5 Abaixo do peso
18,5 ≤ IMC < 25,0 Peso ideal
25,0 ≤ IMC < 30,0 Sobrepeso
30,0 ≤ IMC < 35,0 Obesidade grau I
35,0 ≤ IMC < 40,0 Obesidade grau II
IMC ≥ 40,0 Obesidade grau III
*/

#include <stdio.h>

int main() {
    float altura, imc, peso;

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    if (altura >= 100) {
        altura = altura/100;
    }

    imc = peso/(altura*altura);

    if (imc < 18.5) {
        printf("IMC: Abaixo do Peso");
    }
    else if (imc < 25) {
        printf("IMC: Peso Ideal");
    }
    else if (imc < 30) {
        printf("IMC: Sobrepeso");
    }
    else if (imc < 35) {
        printf("IMC: Obesidade Grau I");
    }
    else if (imc < 40) {
        printf("IMC: Obesidade Grau II");
    }
    else {
        printf("IMC: Obesidade Grau III");
    }
}