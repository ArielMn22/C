/*DIVISIVEIS_23*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n1,n2,n3,n4;
  printf("Insira quatro números e veja quais são divísiveis por 2 ou 3.\n\n");

  //Entrada
  printf("Insira um primeiro valor: ");
  scanf("%d", &n1);

  printf("Insira um segundo valor: ");
  scanf("%d", &n2);

  printf("Insira um terceiro valor: ");
  scanf("%d", &n3);

  printf("Insira um quarto valor: ");
  scanf("%d", &n4);

  //Processamento e saída
  if(n1%2==0||n1%3==0) {
    printf("%d\n", n1);
  }
  if(n2%2==0||n2%3==0) {
    printf("%d\n", n2);
  }
  if(n3%2==0||n3%3==0) {
    printf("%d\n", n3);
  }
  if(n4%2==0||n4%3==0) {
    printf("%d\n", n4);
  }

  system("pause");
  return 0;
}
