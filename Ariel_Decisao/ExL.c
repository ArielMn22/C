/*NAOMAIORQUETRES*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n;
  printf("Insira um número e se ele for não maior que três ele aparecerá.\n\n");

  //Entrada
  printf("Insira um número: ");
  scanf("%d", &n);

  //Processamento e saída
  if(!(n>3)){
    printf("%d",n);
  } else {
    printf("Valor maior que três (não permitido!)");
  }
  printf("\n\n");

  system("pause");
  return 0;
}
