#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    float SM, PR, NS;

    //Entrada;
    printf("Insira o sal�rio mensal: ");
    scanf("%f", &SM);

    printf("Insira o percentual de reajuste: ");
    scanf("%f", &PR);

    //Processamento;
    NS = SM + (SM*(PR/100));

    //Sa�da;
    printf("Novo sal�rio � igual a: R$%.2f\n", NS);

    system("pause");
    return 0;
}
