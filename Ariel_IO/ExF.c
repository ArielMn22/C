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
    printf("Insira um valor para variável A: ");
    scanf("%d", &A);

    printf("Insira um valor para variável B: ");
    scanf("%d", &B);

    //Processamento;
    C = A + B;
    A = C - A;
    B = C - B;

    //Saída;
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    system("pause");
    return 0;
}
