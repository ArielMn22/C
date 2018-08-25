/*MEDIA*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  float n1,n2,n3,n4,media;
  printf("Insira suas notas e veja se está aprovado ou reprovado.\n\n");

  //Entrada
  printf("Insira sua primeira nota: \n");
  scanf("%f", &n1);

  printf("Insira sua segunda nota: \n");
  scanf("%f", &n2);

  printf("Insira sua terceira nota: \n");
  scanf("%f", &n3);

  printf("Insira sua quarta nota: \n");
  scanf("%f", &n4);

  //Processamento e saída
  media = (n1 + n2 + n3 + n4) / 4;

  printf("Média: %.2f", media);
  printf("\nSituação: ");

  if(media>=5){
    printf("Aprovado");
  } else {
    printf("Reprovado");
  }
  printf("\n");

  system("pause");
  return 0;
}
