/*
QUESTÃO 07: Uma determinada empresa fez
uma pesquisa de mercado para saber se as
pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: gênero (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se
que foram entrevistadas X pessoas, faça um
programa que forneça:
a) Número de pessoas que gostaram do
produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que gênero
o produto teve uma melhor
aceitação.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int i, quantEntrevistados, quantN = 0, homemGostou = 0, mulherGostou = 0, contM = 0, contF = 0;
    char genero, resposta;

    printf("\nQuantidade de pessoas entrevistadas: ");
    scanf("%d", &quantEntrevistados);
    fflush(stdin);

    for (i = 1; i <= quantEntrevistados; i++)
    {
        printf("\n[M]asculino\n[F]eminino\n\nGenero do Entrevistado %d: ", i);
        scanf("%c", &genero);
        genero = toupper(genero);
        fflush(stdin);

        printf("\n[G]ostou\n[N]ao Gostou\n\nOpiniao do Entrevistado %d: ", i);
        scanf("%c", &resposta);
        resposta = toupper(resposta);
        fflush(stdin);

        if ((genero == 'M') && (resposta == 'G'))
        {
            homemGostou++;
        }
        if ((genero == 'F') && (resposta == 'G'))
        {
            mulherGostou++;
        }

        if ((resposta == 'N'))
        {
            quantN++;
        }

        if ((genero == 'M'))
        {
            contM++;
        }

        if ((genero == 'F'))
        {
            contF++;
        }
    }

    printf("\nQuantidade de pessoas que gostaram do produto: %d", mulherGostou + homemGostou);
    printf("\nQuantidade de pessoas que nao gostaram do produto: %d\n", quantN);

    if ((homemGostou / contM) > (mulherGostou / contF))
    {
        printf("Genero com mais aceitacao: Masculino");
    }
    else
    {
        printf("Genero com mais aceitacao: Feminino");
    }
}