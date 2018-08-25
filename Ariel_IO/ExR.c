#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    float va,vb,vc,vbr,vn,total;
    float pv,pva,pvb,pvc,pvn,pvbr;

    //Entrada;
    printf("Insira os votos válidos para o candidato A: ");
    scanf("%f", &va);

    printf("Insira os votos válidos para o candidato B: ");
    scanf("%f", &vb);

    printf("Insira os votos válidos para o candidato C: ");
    scanf("%f", &vc);

    printf("Insira os votos em branco: ");
    scanf("%f", &vbr);

    printf("Insira os votos nulos: ");
    scanf("%f", &vn);

    //Processamento;
    total = va + vb + vc + vn + vbr;
    pv = 100*(total-vn-vbr)/total;
    pva = 100*(total-vb-vc-vn-vbr)/total;
    pvb = 100*(total -va-vc-vn -vbr)/total;
    pvc = 100*(total -va-vb-vn -vbr)/total;
    pvn = 100*(total -va-vb-vc-vbr)/total;
    pvbr = 100*(total -va-vb-vc-vn)/total;

    //Saída;
    printf("Total de votos: %.0f\n", total);
    printf("Votos válidos: %.2f%%\n", pv);
    printf("Votos válidos para o candidato A: %.2f%%\n", pva);
    printf("Votos válidos para o candidato B: %.2f%%\n", pvb);
    printf("Votos válidos para o candidato C: %.2f%%\n", pvc);
    printf("Votos nulos: %.2f%%\n", pvn);
    printf("Votos brancos: %.2f%%\n", pvbr);

    system("pause");
    return 0;
}
