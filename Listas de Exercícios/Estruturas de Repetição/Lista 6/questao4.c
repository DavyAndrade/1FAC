/*
QUESTÃO 04: A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura
deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até
R$ 1.000,00.
*/

#include <stdio.h>
#define HAB 300

int main()
{
    int i, quantFilhos, totalFilhos = 0, contMenor1000 = 0;
    float salario, maiorSalario = 0, totalSalario = 0;

    for (i = 1; i <= HAB; i++)
    {
        printf("\nSalario [%d]: ", i);
        scanf("%f", &salario);

        printf("Quantidade de Filhos [%d]: ", i);
        scanf("%d", &quantFilhos);

        totalFilhos += quantFilhos;
        totalSalario += salario;

        if (salario <= 1000)
        {
            contMenor1000++;
        }

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
    }

    printf("\nMedia do salario da populacao: %.2fR$", (float)totalSalario / HAB);
    printf("\nMedia de filhos p/habitante: %.1f", ((float)totalFilhos / HAB));
    printf("\nMaior salario: %.2fR$", maiorSalario);
    printf("\nPercentual de Pessoas com salario ate 1000R$: %.0f p/cento", ((float)HAB / contMenor1000) * 10);
}