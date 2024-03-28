/*
QUESTÃO 06:
Fazer um algoritmo que determine a ordem de
uma data (dia e mês) no ano.
Exemplos:
01/01 - 1o dia do ano
03/02 - 34o dia do ano
*/

#include <stdio.h>

int main()
{
    int dia, mes;

    printf("Dia: ");
    scanf("%d", &dia);
    fflush(stdin);

    printf("Mes: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1: // Janeiro
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia);
        break;

    case 2: // Fevereiro
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 31);
        break;

    case 3: // Março
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 59);
        break;

    case 4: // Abril
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 90);
        break;

    case 5: // Maio
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 120);
        break;

    case 6: // Junho
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 151);
        break;

    case 7: // Julho
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 181);
        break;

    case 8: // Agosto
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 212);
        break;

    case 9: // Setembro
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 243);
        break;

    case 10: // Outubro
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 273);
        break;

    case 11: // Novembro
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 304);
        break;

    case 12: // Dezembro
        printf("%d/%d = %d Dia do Ano\n", dia, mes, dia + 334);
        break;

    default:
        printf("Insira um mes valido!");
    }
}