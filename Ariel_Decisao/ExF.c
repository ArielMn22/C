/*ORDENA_CRESCENTE*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int a,b,c;
  printf("Insira três números e os veja dispostos em ordem crescente: \n");

  //Entrada
  printf("Insira o primeiro valor:" );
  scanf("%d", &a);

  printf("Insira o primeiro valor:" );
  scanf("%d", &b);

  printf("Insira o primeiro valor:" );
  scanf("%d", &c);

  //Processamento e saída
  if(a>=b){
    if(b>=c){
      printf("%d,%d,%d", c,b,a);
    } else {
      if(a>=c){
        printf("%d,%d,%d",b,c,a);
      } else {
        printf("%d,%d,%d",b,a,c);
      }
    }
  } else {
    if(b>=c){
      if(a>=c){
        printf("%d,%d,%d",c,a,b);
      } else {
        printf("%d,%d,%d",a,c,b);
      }
    } else {
        printf("%d,%d,%d",a,b,c);
    }
  }
  printf("\n\n");

  system("pause");
  return 0;
}
