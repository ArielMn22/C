#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    float us, vus, reais; // us = d�lar, vus = valor do d�lar;

    //Entrada;
    printf("Insira a cota��o do d�lar: ");
    scanf("%f", &vus);

    printf("Insira a quantidade de d�lares: ");
    scanf("%f", &us);

    //Processamento;
    reais = us * vus;

    //Sa�da;
    printf("US$%.2f valem R$%.2f\n", us, reais);

    system("pause");
    return 0;
}
