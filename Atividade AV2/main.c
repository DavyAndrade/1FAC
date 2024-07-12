// Importação de Bibliotecas
#include <stdio.h>

// Definição de Constantes
#define CAP 10

// Protótipo das Funções
void inserir(int vetor[], int *quant, int num);
void removerNum(int vetor[], int *quant, int num);
void removerPos(int vetor[], int *quant, int pos);
void alterarNum(int vetor[], int quant, int antigo, int novo);
int buscar(int vetor[], int quant, int num);
void exibir(int vetor[], int quant);
void exibirMenu();

// Main
int main()
{
    int vetor[CAP];
    int quant = 0;
    int opcao, num, pos, antigo, novo;

    do
    {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o numero a ser inserido: ");
            scanf("%d", &num);
            inserir(vetor, &quant, num);
            break;

        case 2:
            printf("Digite o valor a ser removido: ");
            scanf("%d", &num);
            removerNum(vetor, &quant, num);
            break;

        case 3:
            printf("Digite a posicao do elemento a ser removido (0 a %d): ", quant - 1);
            scanf("%d", &pos);
            removerPos(vetor, &quant, pos);
            break;

        case 4:
            printf("Digite o valor antigo: ");
            scanf("%d", &antigo);
            printf("Digite o novo valor: ");
            scanf("%d", &novo);

            alterarNum(vetor, quant, antigo, novo);
            break;

        case 5:
            printf("Digite o numero a ser buscado: ");
            scanf("%d", &num);
            pos = buscar(vetor, quant, num);

            if (pos != -1)
            {
                printf("Numero encontrado na posicao %d\n", pos);
            }
            else
            {
                printf("Numero nao encontrado\n");
            }
            break;

        case 6:
            exibir(vetor, quant);
            break;

        case 7:
            printf("Programa Encerrado!\n");
            break;

        default:
            printf("Opcao Invalida!\n");
            break;
        }
    } while (opcao != 7);
}

// Exibição do Menu
void exibirMenu()
{
    printf("\nMenu:\n");
    printf("1) Inserir novo numero\n");
    printf("2) Remover determinado valor\n");
    printf("3) Remover elemento em uma dada posicao\n");
    printf("4) Alterar um valor por outro\n");
    printf("5) Buscar um numero\n");
    printf("6) Exibir todos os elementos\n");
    printf("7) Sair\n");
}

// Inserir um número no vetor
void inserir(int vetor[], int *quant, int num)
{
    int i;

    if (*quant >= CAP)
    {
        printf("Vetor cheio!\n");
        return;
    }
    else
    {
        for (i = *quant - 1; (i >= 0 && vetor[i] > num); i--)
        {
            vetor[i + 1] = vetor[i];
        }
    }
    vetor[i + 1] = num;
    (*quant)++;
}

// Remover um determinado número do vetor
void removerNum(int vetor[], int *quant, int num)
{
    int i, j;

    for (i = 0; i < *quant; i++)
    {
        if (vetor[i] == num)
        {
            for (j = i; j < *quant - 1; j++)
            {
                vetor[j] = vetor[j + 1];
            }
            (*quant)--;
            i--;
        }
    }
}

// Remover um numero do vetor pela posição
void removerPos(int vetor[], int *quant, int pos)
{
    int i;

    if (pos < 0 || pos >= *quant)
    {
        printf("Posição invalida!\n");
        return;
    }

    for (i = pos; i < *quant - 1; i++)
    {
        vetor[i] = vetor[i + 1];
    }
    (*quant)--;
}

// Alterar um determinado numero do vetor
void alterarNum(int vetor[], int quant, int antigo, int novo)
{
    removerNum(vetor, &quant, antigo);
    inserir(vetor, &quant, novo);
}

// Buscar um determinado numero do vetor
int buscar(int vetor[], int quant, int num)
{
    int i;

    for (i = 0; i < quant; i++)
    {
        if (vetor[i] == num)
        {
            return i;
        }
    }
    return -1;
}

// Exibir os elementos do vetor
void exibir(int vetor[], int quant)
{
    int i;

    if (quant == 0)
    {
        printf("Vetor vazio!\n");
    }
    else
    {
        for (i = 0; i < quant; i++)
        {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }
}
