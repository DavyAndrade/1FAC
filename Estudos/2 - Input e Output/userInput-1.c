#include <stdio.h>

int main() {
    int myNum;
    char myChar;

    // Pede um número e logo após lê o valor que o usuário inseriu, atribuindo na varíavel myNum
    printf("Insira um numero: ");
    scanf("%d", &myNum);
    fflush(stdin);

    // Pede um caractere e logo após lê o valor inserido pelo usuário, atribuindo a myChar
    printf("Insira um caractere: ");
    scanf("%c", &myChar);

    // Exibe o numero e o caractere lidos.
    printf("Numero: %d\n", myNum);
    printf("Letra: %c\n", myChar);
}