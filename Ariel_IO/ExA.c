#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"Portuguese");

    //Declarando vari�veis;
    float C, F;

    //Entrada;
    printf("Digite uma temperatura em graus Celsius (�C): ");
    scanf("%f", &C);

    //Processamento;
    F = (9*C+160)/5;

    //Sa�da;
    printf("A temperatura em Fahrenheit �: %.2f�F\n", F);

    system("pause");
    return 0;

    }
