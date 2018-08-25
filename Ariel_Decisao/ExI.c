/*MAIOREMENOR*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  int n1,n2,n3,n4,n5;
  printf("Insira quatro valores e veja o maior e o menor deles.\n\n");

  //Entrada
  printf("Insira o primeiro valor: ");
  scanf("%d", &n1);

  printf("Insira o segundo valor: ");
  scanf("%d", &n2);

  printf("Insira o terceiro valor: ");
  scanf("%d", &n3);

  printf("Insira o quarto valor: ");
  scanf("%d", &n4);

  printf("Insira o quinto valor: ");
  scanf("%d", &n5);

  //Processamento e saída
  if(n1>n2 && n1>n3 && n1>n4 && n1>n5){
    printf("%d\n", n1);
  } else {
    if(n1<n2 && n1<n3 && n1<n4 && n1<n5){
    printf("%d\n", n1);
    }
  }
  if(n2>n1 && n2>n3 && n2>n4 && n2>n5){
    printf("%d\n", n2);
  } else {
    if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
    printf("%d\n", n2);
    }
  }
  if(n3>n1 && n3>n2 && n3>n4 && n3>n5){
    printf("%d\n", n3);
  } else {
    if(n3<n1 && n3<n2 && n3<n4 && n3<n5){
    printf("%d\n", n3);
    }
  }
  if(n4>n1 && n4>n2 && n4>n3 && n4>n5){
    printf("%d\n", n4);
  } else {
    if(n4<n1 && n4<n2 && n4<n3 && n4<n5){
    printf("%d\n", n4);
    }
  }
  if(n5>n1 && n5>n2 && n5>n3 && n5>n4){
    printf("%d\n", n5);
  } else {
    if(n5<n1 && n5<n2 && n5<n3 && n5<n4){
    printf("%d\n", n5);
    }
  }
  system("pause");
  return 0;
}
