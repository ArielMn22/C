/*LADO_POSITIVO*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n;
  printf("Insira qualquer n�mero e veja o mesmo positivo.\n\n");

  //Entrada
  printf("Insira um n�mero: \n");
  scanf("%d", &n);

  //Processamento e sa�da
  if(n<=0){
    n = n * -1;
  }
  printf("%d\n", n);

  system("pause");
  return 0;
}
