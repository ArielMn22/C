#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando var�veis;
    float raio,high,volume;

    //Entrada;
    printf("Insira o raio da lata de �leo (em cent�metros): ");
    scanf("%f", &raio);

    printf("Insira a altura da lata (em cent�metros): ");
    scanf("%f", &high);

    //Processamento;
    volume = 3.14159 * pow(raio,2) * high;

    //Sa�da;
    printf("O volume da lata �: %.1fcm�\n", volume);

    system("pause");

    return 0;
}
