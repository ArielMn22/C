/*NAFAIXA*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n;
  printf("Insira um valor e veja se ele est� na faixa permitida.\n\n");

  //Entrada
  printf("Insira um n�mero: ");
  scanf("%d", &n);

  //Processamento e sa�da
  if(n>=1 && n<=9){
    printf("Valor permitido.");
  } else {
    printf("Valor n�o permitido.");
  }

  printf("\n\n");

  system("pause");
  return 0;
}
