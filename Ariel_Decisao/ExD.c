/*MEDIA_EXAME*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){

  setlocale(LC_ALL, "Portuguese");

  //Declarando
  float n1,n2,n3,n4,n5,media;
  printf("Insira suas notas para ver se est� aprovado, aprovado pelo exame ou reprovado.\n\n");

  //Entrada
  printf("Insira sua primeira nota: \n");
  scanf("%f", &n1);

  printf("Insira sua segunda nota: \n");
  scanf("%f", &n2);

  printf("Insira sua terceira nota: \n");
  scanf("%f", &n3);

  printf("Insira sua quarta nota: \n");
  scanf("%f", &n4);

  //Processamento e sa�da
  media = (n1 + n2 + n3 + n4) / 4;

  if(media>=7){
    printf("M�dia: %2.f\n", media);
    printf("Situa��o: Aprovado");
  } else {
    printf("Insira sua nota de exame: ");
    scanf("%f", &n5);

    media = (n5 + media) / 2;

    printf("M�dia: %.2f\n", media);
    printf("Situa��o: ");
    if(media>=5){
      printf("Aprovado em exame");
    } else {
      printf("Reprovado");
    }
  }
  printf("\n\n");
  system("pause");
  return 0;
}
