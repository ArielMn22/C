#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    int A, B, C;

    //Entrada;
    printf("Insira um valor para vari�vel A: ");
    scanf("%d", &A);

    printf("Insira um valor para vari�vel B: ");
    scanf("%d", &B);

    //Processamento;
    C = A + B;
    A = C - A;
    B = C - B;

    //Sa�da;
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    system("pause");
    return 0;
}
