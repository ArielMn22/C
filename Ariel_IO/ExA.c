#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"Portuguese");

    //Declarando variáveis;
    float C, F;

    //Entrada;
    printf("Digite uma temperatura em graus Celsius (°C): ");
    scanf("%f", &C);

    //Processamento;
    F = (9*C+160)/5;

    //Saída;
    printf("A temperatura em Fahrenheit é: %.2f°F\n", F);

    system("pause");
    return 0;

    }
