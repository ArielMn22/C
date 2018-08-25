#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    //Declarando;
    float tg, vm; //tg = tempo gasto, vm = velocidade m�dia;
    float dt, lu; //dt = dist�ncia total, lu = litros usados;

    //Entrada;
    printf("Insira o n�mero de horas gastas na viagem: ");
    scanf("%f", &tg);

    printf("Insira a velocidade m�dia durante a viagem: ");
    scanf("%f", &vm);

    //Processamento;
    dt = tg * vm;
    lu = dt / 12;

    //Sa�da;
    printf("Velocidade m�dia: %.1fKm/h\n", vm);
    printf("Tempo gasto: %.1f horas\n", tg);
    printf("Dist�ncia Percorrida: %.1fKm\n", dt);
    printf("Litros utilizados: %.1fL\n", lu);

    system("pause");

    return 0;
}
