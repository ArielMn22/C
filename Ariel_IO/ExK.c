#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    float us, vus, reais; // us = dólar, vus = valor do dólar;

    //Entrada;
    printf("Insira a cotação do dólar: ");
    scanf("%f", &vus);

    printf("Insira a quantidade de dólares: ");
    scanf("%f", &us);

    //Processamento;
    reais = us * vus;

    //Saída;
    printf("US$%.2f valem R$%.2f\n", us, reais);

    system("pause");
    return 0;
}
