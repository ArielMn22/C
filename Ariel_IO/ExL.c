#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    float cotacao, reais, dolar;

    //Entrada;
    printf("Insira a cota��o do d�lar: ");
    scanf("%f", &cotacao);

    printf("Insira a quantidade de reais: ");
    scanf("%f", &reais);

    //Processamento;
    dolar = reais / cotacao;

    //Sa�da;
    printf("R$%.2f valem US$%.2f\n", reais, dolar);

    system("pause");
    return 0;
}
