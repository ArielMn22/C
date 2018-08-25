/*NAFAIXA*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n;
  printf("Insira um valor e veja se ele está na faixa permitida.\n\n");

  //Entrada
  printf("Insira um número: ");
  scanf("%d", &n);

  //Processamento e saída
  if(n>=1 && n<=9){
    printf("Valor permitido.");
  } else {
    printf("Valor não permitido.");
  }

  printf("\n\n");

  system("pause");
  return 0;
}
