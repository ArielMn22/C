#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*DIF_MAIOR_MENOR*/

int main (void) {
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n1,n2;
  printf("Insira dois valores para que seja calculada a diferença do maior pelo menor.\n\n");

  //Entrada
  printf("Primeiro valor: ");
  scanf("%d", &n1);

  printf("Segundo valor: ");
  scanf("%d", &n2);

  //Processamento e saída
  if(n1>=n2){
    printf("%d",n1 - n2);
  } else {
    printf("%d",n2 - n1);
  }
  printf("\n");

  system("pause");
  return 0;
}
