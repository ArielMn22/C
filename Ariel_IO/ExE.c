#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    float prestacao, valor, taxa, tempo;

    //Entrada;
    printf("Insira o valor da presta��o: ");
    scanf("%f", &valor);

    printf("Insira o valor da taxa (em porcentagem): ");
    scanf("%f", &taxa);

    printf("Insira o tempo de atraso (em meses): ");
    scanf("%f", &tempo);

    //Processamento;
    prestacao = valor + (valor*(taxa/100)*tempo);

    //Sa�da;
    printf("O valor da presta��o �: R$%.2f\n", prestacao);

    system("pause");
    return 0;
}
