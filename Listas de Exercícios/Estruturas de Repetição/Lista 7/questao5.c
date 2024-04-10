/*
QUESTÃO 05: Uma pesquisa foi feita
coletando informações (idade, altura e
peso) de um grupo de pessoas.
Pede-se a implementação de um programa
que proceda com a leitura de tais
informações (até que o usuário opte por
concluir a entrada de dados) e calcule:
 A quantidade de pessoas com idade
superior a 50 anos;
 A média de altura das pessoas com mais de
80 kg;
 O maior peso dentre as pessoas acima de
1.65 m de altura e com idade inferior a 30
anos.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int idade, peso, cont50 = 0, cont80 = 0, maiorPeso = 0;
    float altura, mediaAltura = 0;
    char opcao;

    do
    {

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Peso: ");
        scanf("%d", &peso);

        printf("Altura: ");
        scanf("%f", &altura);
        fflush(stdin);

        if (idade > 50)
        {
            cont50++;
        }

        if (peso > 80)
        {
            mediaAltura += altura;
            cont80++;
        }

        if ((altura > 1.65) && (idade < 30))
        {
            if (peso > maiorPeso)
            {
                maiorPeso = peso;
            }
        }

        printf("\nDeseja continuar? [S/N]: ");
        scanf("%c", &opcao);
        opcao = toupper(opcao);

    } while (opcao == 'S');

    printf("\nQuantidade de pessoas acima de 50 anos: %d", cont50);
    printf("\nMedia da altura de pessoas acima de 80kg: %.1f", (mediaAltura / cont80));
    printf("\nMaior peso entre pessoas acima de 1.65m: %dkg", maiorPeso);
}