#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    int n, result;

    //Entrada;
    printf("Insira um n�mero: ");
    scanf("%d", &n);

    //Processamento;
    result = pow(n,2);

    //Sa�da;
    printf("O quadrado de %d �: %d\n", n, result);

    system("pause");
    return 0;
}
