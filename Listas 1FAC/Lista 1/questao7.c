/*
Escreva um algoritmo para calcular o salário
semanal de uma pessoa, determinado pelas
condições que seguem: se o número de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contrário, a
pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.
*/

#include <stdio.h>

int main()
{
    float HT, VPH;

    printf("Insira as horas trabalhadas: ");
    scanf("%f", &HT);
    fflush(stdin);

    printf("Insira o valor pago p/hora: ");
    scanf("%f", &VPH);

    if (HT <= 40)
    {
        printf("Salario Semanal: %.2f", HT * VPH);
    }
    else
    {
        printf("Salario Semanal: %.2f", (VPH * 40) + ((HT - 40) * 1.5) * VPH);
    }
}