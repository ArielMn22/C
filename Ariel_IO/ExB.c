#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"Portuguese");

    //Declarando vari�veis;
    float F, C;

    //Entrada;
    printf("Digite uma temperatura em graus Farehnheit (�F): ");
    scanf("%f", &F);

    //Processamento;
    C = (F-32)*5/9;

    //Sa�da;
    printf("A temperatura em Celsius �: %.2f�C\n", C);

    system("pause");
    return 0;

    }
