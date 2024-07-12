#include <stdio.h>

int organizaVetor(int vetor[], int n, int tamanho);

int main()
{
    int tamanho, num, i, posicao;

    printf("Informe o valor de N: ");
    scanf("%d", &num);

    printf("Insira a quantidade de elementos: ");
    scanf("%d", &tamanho);

    int vet[tamanho];

    printf("Insira os valores do vetor:/n");
    for (i = 0; i < tamanho; i++)
    {
        printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    posicao = organizaVetor(vet, tamanho, num);

    printf("Vetor Atualizado:/n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int organizaVetor(int vetor[], int n, int tamanho)
{
    
}