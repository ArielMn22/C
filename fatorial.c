#include <stdio.h>

int main(void)
{
  int fat , number, cont;

  printf("Insira um número:\n");
  scanf("%d", &number);

  for (fat = 1 ; number >= 1 ; number--){
    fat *= number; // fat = fat * number == fat *= number
  }
  
  printf("O fatorial de %d é: %d\n", cont, fat);

  return 0;

}
