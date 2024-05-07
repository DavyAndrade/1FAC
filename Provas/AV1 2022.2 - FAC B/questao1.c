/*
Questão 01 [2,5 pontos]:
Analise o código apresentado a seguir e forneça todos
os valores exibidos durante a execução do programa:
*/

#include <stdio.h>

int main()
{
    int i, A, B, C = 0;
    float D;
    A = 0;
    B = 1;
    for (i = 0; i < 10; i += 2)
    {
        if (i % 2 == 0)
        {
            A++;
            i--;
        }
        else
        {
            A = A + B;
        }
        i = i + 1;
        B *= 2;
        C += B / 2;
        printf("A = %d\n", A);
        printf("B = %d\n", B);
        printf("C = %d\n", C);
        printf("i = %d\n\n", i);
    }
    D = B / i + C;
    printf("D = %.2f\n", D);
}

// A = 5, B = 32, C = 31, i = 8, D = 34