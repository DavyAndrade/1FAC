/*
Fazer um programa que auxilie o órgão
regulador no cálculo do total de recursos

arrecadados com a aplicação de multas de
trânsito.
O programa deve ler as seguintes
informações para cada motorista:
 O número da carteira de motorista;
 Número de multas;
 Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas
as multas). O programa também deverá
apresentar o número da carteira do
motorista que obteve o maior número de
multas.
*/

#include <stdio.h>

int main()
{
    int i, j, cnh, numMultas, maiorNumMultas = 0, quant, maiorCNH;
    float valor, somaMulta = 0, divida = 0;

    printf("Quantidade de Motoristas: ");
    scanf("%d", &quant);
    fflush(stdin);

    for (i = 1; i <= quant; i++)
    {
        printf("\nInforme o CNH do Motorista [%d]: ", i);
        scanf("%d", &cnh);
        fflush(stdin);

        printf("\nQuantidade de Multas do Motorista [%d]: ", i);
        scanf("%d", &numMultas);
        fflush(stdin);

        for (j = 1; j <= numMultas; j++)
        {
            printf("\nInforme o Valor da Multa [%d]: ", j);
            scanf("%f", &valor);

            divida += valor;
        }

        somaMulta += divida;

        printf("\nDivida do Motorista de CNH Nº%d: %.2fR$\n", cnh, divida);

        if (numMultas > maiorNumMultas)
        {
            maiorNumMultas = numMultas;
            maiorCNH = cnh;
        }
    }

    printf("\nTotal Arrecadado: %.2fR$", somaMulta);
    printf("\nCNH do Motorista com Maior Numero de Multas: %d", maiorCNH);
}