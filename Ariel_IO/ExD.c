#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    //Declarando;
    float tg, vm; //tg = tempo gasto, vm = velocidade média;
    float dt, lu; //dt = distância total, lu = litros usados;

    //Entrada;
    printf("Insira o número de horas gastas na viagem: ");
    scanf("%f", &tg);

    printf("Insira a velocidade média durante a viagem: ");
    scanf("%f", &vm);

    //Processamento;
    dt = tg * vm;
    lu = dt / 12;

    //Saída;
    printf("Velocidade média: %.1fKm/h\n", vm);
    printf("Tempo gasto: %.1f horas\n", tg);
    printf("Distância Percorrida: %.1fKm\n", dt);
    printf("Litros utilizados: %.1fL\n", lu);

    system("pause");

    return 0;
}
