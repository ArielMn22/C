#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    int A, B, C, result;

    //Entrada;
    printf("Insira um valor para A: ");
    scanf("%d", &A);

    printf("Insira um valor para B: ");
    scanf("%d", &B);

    printf("Insira um valor para C: ");
    scanf("%d", &C);

    //Processamento;
    result = pow(A + B + C, 2);

    //Saída;
    printf("O quadrado da soma de %d, %d e %d é: %d\n", A, B, C, result);

    system("pause");
    return 0;
}
