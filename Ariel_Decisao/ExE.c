/*BHASKARA*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  float a,b,c,delta,x1,x2;
  printf("Insira os valores de A, B e C e veja o resultado de x1 e x2;\n\n");

  //Entrada
  printf("Insira o valor de A: ");
  scanf("%f", &a);

  printf("Insira o valor de B: ");
  scanf("%f", &b);

  printf("Insira o valor de C: ");
  scanf("%f", &c);

  //Processamento e saída
  if(a==0||b==0||c==0){
    printf("Um dos valores é igual a zero, saindo do programa...");
  } else {
    delta = ((pow(b,2)) - 4*(a*c));

    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    if(delta>=0){      if(delta==0){
        printf("OBS: Só uma raiz é real.\n");
        printf("x1 = %.2f\nx2 = %.2f", x1, x2);
      } else {
        printf("x1 = %.2f\nx2 = %.2f", x1, x2);
      }
    } else {
      printf("Nenhuma raiz é real");
    }
  }
  printf("\n\n");

  system("pause");
  return 0;
}
