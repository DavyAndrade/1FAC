/*
QUESTÃO 04: Desenvolva um algoritmo que
calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso,
devem ser obtidos: i) o percurso (em
quilômetros) da viagem; ii) o número de
quilômetros que o carro percorre com um litro
de combustível (km/l); e iii) o preço do litro do
combustível.
Ao final, o algoritmo deve determinar:
 A quantidade de combustível, em litros,
consumida durante a viagem;
 O custo total de combustível.
*/

#include <stdio.h>

int main()
{
    float percurso, combustivel, precoLitro;

    printf("Insira o percurso (em km) da viagem: ");
    scanf("%f", &percurso);

    printf("Quilometros que o carro percorre com um litro de combustivel: ");
    scanf("%f", &combustivel);

    printf("Insira o preco do litro do combustivel: ");
    scanf("%f", &precoLitro);

    printf("Quantidade de combustivel consumido: %.1f Litros\n", percurso / combustivel);
    printf("Custo total de combustivel: %.2fR$", (percurso / combustivel) * precoLitro);
}