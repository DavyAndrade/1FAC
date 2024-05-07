/*
Questão 04:
Implementar um programa que simule operações de
depósito e saque em uma conta corrente. Para isto,
deverá realizar as seguintes ações:
1. Solicitar ao usuário o saldo da conta, que não
poderá ser negativo. Caso o saldo inicial seja
inválido, um novo valor deverá ser solicitado (até
que o saldo seja não negativo);
2. Em seguida, um menu será apresentado com as
opções de Saque (S), Depósito (D) e Fim (F);
3. Sempre que o usuário optar pela opção S, o
valor do saque deverá ser lido e, se houver saldo
disponível, a operação será realizada (caso
contrário, uma mensagem de erro será exibida e
o menu será novamente apresentado);
4. Se a opção D for escolhida, o valor a ser
depositado deverá ser informado pelo usuário.
Se for fornecido um valor não positivo, uma
mensagem de erro deverá ser apresentada e o
menu voltará a ser exibido;
5. O menu deverá ser apresentado ao usuário até
que esse escolha a opção F;
6. Ao final, deverão ser apresentados: i) o total (em
R$) de saques efetuados; ii) o total (em R$) de
depósitos realizados; o valor do saldo final.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    float saldo = -1, totalSaque = 0, totalDeposito, valor;
    char opcao;

    while (saldo < 0)
    {
        printf("Informe o seu saldo: ");
        scanf("%f", &saldo);
        fflush(stdin);
    }

    while (opcao != 'F')
    {
        printf("\nOpcoes: \nSaque [S]\nDeposito [D]\nFim do Programa [F]");
        printf("\nEscolha uma opcao: ");
        scanf("%c", &opcao);
        opcao = toupper(opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 'S':
            printf("\nSaldo Disponivel: %.2f\n", saldo);
            printf("Valor do Saque: ");
            scanf("%f", &valor);
            fflush(stdin);

            if (valor > saldo)
            {
                printf("\nErro: Saque maior que o saldo em conta!\n");
            }
            else
            {
                totalSaque += valor;
                saldo -= valor;
            }
            break;

        case 'D':
            printf("\nSaldo Disponivel: %.2f\n", saldo);
            printf("Valor de Deposito: ");
            scanf("%f", &valor);
            fflush(stdin);

            if (valor < 0)
            {
                printf("\nErro: Deposito com valor negativo!\n");
            }
            else
            {
                totalDeposito += valor;
                saldo += valor;
            }

            break;
        }
    }

    // i) o total (em R$) de saques efetuados;
    printf("\nTotal (em R$) de Saques Efetuados: %.2fR$\n", totalSaque);

    // ii) o total (em R$) de depósitos realizados;
    printf("Total (em R$) de Depositos Realizados: %.2fR$\n", totalDeposito);

    //  iii) o valor do saldo final.
    printf("Valor do saldo final: %.2fR$\n", saldo);
}