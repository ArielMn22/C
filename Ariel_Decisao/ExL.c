/*NAOMAIORQUETRES*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n;
  printf("Insira um n�mero e se ele for n�o maior que tr�s ele aparecer�.\n\n");

  //Entrada
  printf("Insira um n�mero: ");
  scanf("%d", &n);

  //Processamento e sa�da
  if(!(n>3)){
    printf("%d",n);
  } else {
    printf("Valor maior que tr�s (n�o permitido!)");
  }
  printf("\n\n");

  system("pause");
  return 0;
}
