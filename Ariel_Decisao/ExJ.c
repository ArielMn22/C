/*PAROUIMPAR*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n;
  printf("Insira um n�mero e direi se � par ou impar.\n\n");

  //Entrada
  printf("Insira um n�mero: ");
  scanf("%d", &n);

  //Processamento e sa�da
  printf("%d ",n);

  if(n%2==0){
    printf("� par.");
  } else {
    printf("� impar.");
  }

  printf("\n\n");

  system("pause");
  return 0;
}
