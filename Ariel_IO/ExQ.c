#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    float R, A;

    //Entrada;
    printf("Insira o raio da circunfer�ncia: ");
    scanf("%f", &R);

    //Processamento;
    A = pow(R,2) * 3,14159;

    //Sa�da;
    printf("A �rea do c�rculo de raio %.0f �: %.2f\n", R, A);

    system("pause");
    return 0;
}
