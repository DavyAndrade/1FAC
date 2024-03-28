/*
QUESTÃO 02:
Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.
Notas:
1. Fórmulas para o cálculo das áreas:
a. Acírculo = π.raio2

, onde π = 3.14159;

b. Aretângulo = base.altura;
c. Aquadrado = lado2
;
d. Atriângulo = (base.altura)/2.
2. Caso o usuário escolha uma opção inválida,
uma mensagem de erro deve ser exibida e a
execução do programa terminada.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char opcao;
    float raio, base, altura, lado;

    printf("\n[C]irculo");
    printf("\n[R]etangulo");
    printf("\n[Q]uadrado");
    printf("\n[T]riangulo");

    printf("\n\nEscolha uma forma geometrica: ");
    scanf("%c", &opcao);
    opcao = toupper(opcao);

    switch ((opcao))
    {
    case 'C':
        printf("\nInforme o Raio: ");
        scanf("%f", &raio);

        printf("Area do Circulo: %.1f", 3.14 * (raio * raio));
        break;

    case 'R':
        printf("\nInforme a Base: ");
        scanf("%f", &base);

        printf("\nInforme a Altura: ");
        scanf("%f", &altura);

        printf("Area do Retangulo: %.1f", base * altura);
        break;

    case 'Q':
        printf("Informe o Lado: ");
        scanf("%f", &lado);

        printf("Area do Quadrado: %.1f", lado * lado);
        break;

    case 'T':
        printf("Informe a Base: ");
        scanf("%f", &base);

        printf("Informe a Altura: ");
        scanf("%f", &altura);

        printf("Area do Triangulo: %.1f", (base * altura) / 2);
        break;

    default:
        printf("Insira uma forma geometrica valida!!");
        break;
    }
}