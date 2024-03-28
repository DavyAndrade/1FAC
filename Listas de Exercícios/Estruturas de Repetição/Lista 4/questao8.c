/*
QUESTÃO 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informações dos seus 250 funcionários. Cada
funcionário deverá responder um
questionário ao qual informará os seguintes
dados: matrícula, gênero, idade, salário e
tempo (em anos) de trabalho na empresa. A
execução do programa deve exibir os
seguintes itens:
a) Quantidade de funcionários que
ingressaram na empresa com menos
de 21 anos;
b) Quantidade de funcionários do
gênero feminino;
c) Média salarial dos homens;
d) Matrícula dos funcionários mais
antigo e mais novo.
*/

#include <stdio.h>
#include <ctype.h>

#define QUANT 250

int main()
{
    int i, idade, matricula, cont21 = 0, contF = 0, contM = 0, tempo, tempoMaior = 0, tempoMenor = 100, matriculaMaisAntigo, matriculaMaisNovo;
    float salario, soma = 0;
    char genero;

    for (i = 1; i <= QUANT; i++)
    {
        printf("\nInforme seu numero de matricula: ");
        scanf("%d", &matricula);
        fflush(stdin);

        printf("\nInforme sua idade: ");
        scanf("%d", &idade);
        fflush(stdin);

        printf("\n[M]asculino\n[F]eminino\n\nInforme seu genero: ");
        scanf("%c", &genero);
        genero = toupper(genero);
        fflush(stdin);

        printf("\nTempo de servico (em anos): ");
        scanf("%d", &tempo);
        fflush(stdin);

        printf("\nInforme seu salario: ");
        scanf("%f", &salario);
        fflush(stdin);

        if ((idade - tempo < 21))
        {
            cont21++;
        }

        if ((genero == 'F'))
        {
            contF++;
        }

        if ((genero == 'M'))
        {
            contM++;
            soma += salario;
        }

        if ((tempo > tempoMaior)) {
            tempoMaior = tempo;
            matriculaMaisAntigo = matricula;
        }

        if ((tempo < tempoMenor)) {
            tempoMenor = tempo;
            matriculaMaisNovo = matricula;
        }
    }

    printf("\nQuantidade de funcionarios do genero feminino: %d", contF);
    printf("\nQuantidade de funcionarios com menos de 21: %d", cont21);
    printf("\nMedia dos Salarios dos Homens: %.2f", soma / contM);
    printf("\nMatricula do Funcionario Mais Novo: %d", matriculaMaisNovo);
    printf("\nMatricula do Funcionario Mais Antigo: %d\n", matriculaMaisAntigo);
}