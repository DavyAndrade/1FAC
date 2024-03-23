/*
QUESTÃO 02:
Elabore um algoritmo que, dada a idade de um
nadador, classifique-o em uma das seguintes
categorias:
Categoria Faixa de idade
infantil A 0 - 4 anos
infantil B 5 - 7 anos
infantil C 8-10 anos
juvenil A 11-13 anos
juvenil B 14-17 anos
Adulto 18 anos ou mais
*/

#include <stdio.h>

void main() {
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Entre com uma idade valida!!");
    }
    else if (idade <= 4) {
        printf("Categoria: Infantil A");
    } 
    else if (idade <= 7) {
        printf("Categoria: Infantil B");
    } 
    else if (idade <= 10) {
        printf("Categoria: Infantil C");
    }
    else if (idade <= 13) {
        printf("Categoria: Juvenil A");
    }
    else if (idade <= 17) {
        printf("Categoria: Juvenil B");
    }
    else {
        printf("Categoria: Adulto");
    }
}