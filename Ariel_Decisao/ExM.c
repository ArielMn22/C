/*GENERO*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main (void){
  setlocale(LC_ALL, "Portuguese");

  //Declarando
  char name[11], gender[11];
  printf("Insira seu nome e gênero e tenha sua saudação.\n\n");

  //Entrada
  printf("Insira seu nome: ");
  scanf("%s", name);

  printf("Insira seu sexo (masculino ou feminino): ");
  scanf("%s", gender);

  //Processamento e saída
  if(strcmp(gender,"masculino")==0){
    printf("Ilmo. Sr.");
  } else {
    if(strcmp(gender,"feminino")==0){
      printf("Ilma. Sra.");
    } else {
      printf("Desculpe, não conseguimos identificar seu gênero, mas seu nome é ");
    }
  }
  printf("%s\n\n", name);

  system("pause");
  return 0;
}
