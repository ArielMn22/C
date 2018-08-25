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
    printf("Insira o salário mensal: ");
    scanf("%f", &SM);

    printf("Insira o percentual de reajuste: ");
    scanf("%f", &PR);

    //Processamento;
    NS = SM + (SM*(PR/100));

    //Saída;
    printf("Novo salário é igual a: R$%.2f\n", NS);

    system("pause");
    return 0;
}
