#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    int A,B,C,D,P,S;

    //Entrada;
    printf("Insira um valor para A: ");
    scanf("%d", &A);

    printf("Insira um valor para B: ");
    scanf("%d", &B);

    printf("Insira um valor para C: ");
    scanf("%d", &C);

    printf("Insira um valor para D: ");
    scanf("%d", &D);

    //Processamento;
    P = A * C;
    S = B + D;

    //Saída;
    printf("A * C = %d\n", P);
    printf("B + D = %d\n", S);

    system("pause");
    return 0;
}
