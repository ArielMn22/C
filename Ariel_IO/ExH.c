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
    printf("Insira quantos centímetros mede o comprimento da caixa: ");
    scanf ("%f", &c);

    printf("Insira quantos centímetros mede a largura da caixa: ");
    scanf ("%f", &l);

    printf("Insira quantos centímetros mede a altura da caixa: ");
    scanf("%f", &h);

    //Processamento;
    Volume = c * l * h;

    //Saída;
    printf("O volume da caixa é: %.2fcm³\n", Volume);

    system("pause");
    return 0;
}
