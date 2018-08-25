#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando varáveis;
    float raio,high,volume;

    //Entrada;
    printf("Insira o raio da lata de óleo (em centímetros): ");
    scanf("%f", &raio);

    printf("Insira a altura da lata (em centímetros): ");
    scanf("%f", &high);

    //Processamento;
    volume = 3.14159 * pow(raio,2) * high;

    //Saída;
    printf("O volume da lata é: %.1fcm³\n", volume);

    system("pause");

    return 0;
}
