#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Declarando;
    int A, B, C, D;
    int amb, amc, amd, bmc, bmd, cmd;
    int avb, avc, avd, bvc, bvd, cvd;

    //Entrada;
    printf("Insira um valor para A: ");
    scanf("%d", &A);

    printf("Insira um valor para B: ");
    scanf("%d", &B);

    printf("Insira um valor para C: ");
    scanf("%d", &C);

    printf("Insira um valor para D: ");
    scanf("%d", &D);

    //Processamento;
    amb = A + B;
    amc = A + C;
    amd = A + D;
    bmc = B + C;
    bmd = B + D;
    cmd = C + D;

    avb = A * B;
    avc = A * C;
    avd = A * D;
    bvc = B * C;
    bvd = B * D;
    cvd = C * D;

    //Saída;
    printf("A + B = %d\n", amb);
    printf("A + C = %d\n", amc);
    printf("A + D = %d\n", amd);
    printf("B + C = %d\n", bmc);
    printf("B + D = %d\n", bmd);
    printf("C + D = %d\n", cmd);
    printf("A * B = %d\n", avb);
    printf("A * C = %d\n", avc);
    printf("A * D = %d\n", avd);
    printf("B * C = %d\n", bvc);
    printf("B * D = %d\n", bvd);
    printf("C * D = %d\n", cvd);

    system("pause");
    return 0;
}
