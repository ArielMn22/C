#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    float c, l, h, Volume;

    //Entrada;
    printf("Insira quantos cent�metros mede o comprimento da caixa: ");
    scanf ("%f", &c);

    printf("Insira quantos cent�metros mede a largura da caixa: ");
    scanf ("%f", &l);

    printf("Insira quantos cent�metros mede a altura da caixa: ");
    scanf("%f", &h);

    //Processamento;
    Volume = c * l * h;

    //Sa�da;
    printf("O volume da caixa �: %.2fcm�\n", Volume);

    system("pause");
    return 0;
}
