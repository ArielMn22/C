#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    int A, B, r;

    //Entrada;
    printf("Insira um valor para A: ");
    scanf("%d", &A);

    printf("Insira um valor para B: ");
    scanf("%d", &B);

    //Processamento;
    r = pow(A - B, 2);

    //Sa�da;
    printf("O quadrado da diferen�a entre %d e %d �: %d\n", A, B, r);

    system("pause");
    return 0;
}
