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
        printf("\nCNH do Motorista [%d]: ", i);
        scanf("%d", &cnh);

        printf("\nQuantidade de Multas [%d]: ", i);
        scanf("%d", &numMultas);

        divida = 0;
        for (j = 1; j <= numMultas; j++)
        {
            printf("\nValor da Multa [%d]: ", j);
            scanf("%f", &valor);

            divida += valor;
        }

        printf("\nDivida do Motorista de CNH N.%d: R$%.2f\n", cnh, divida);

        somaMulta += divida;

        if (numMultas > maiorNumMultas)
        {
            maiorNumMultas = numMultas;
            maiorCNH = cnh;
        }
    }

    printf("\nTotal Arrecadado: R$%.2f", somaMulta);
    printf("\nCNH do Motorista com Maior Numero de Multas: %d", maiorCNH);
}