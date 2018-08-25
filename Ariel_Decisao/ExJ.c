/*PAROUIMPAR*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n;
  printf("Insira um número e direi se é par ou impar.\n\n");

  //Entrada
  printf("Insira um número: ");
  scanf("%d", &n);

  //Processamento e saída
  printf("%d ",n);

  if(n%2==0){
    printf("é par.");
  } else {
    printf("é impar.");
  }

  printf("\n\n");

  system("pause");
  return 0;
}
