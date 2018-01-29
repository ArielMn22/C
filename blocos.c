/* blocos.c - Mostra um cubo com o tamanho pedido */

#include <stdio.h>

int main(void) {

  int N,C,L;

  printf("Número: ");
  scanf("%d" , &N);
  printf("\n");

  for ( C=1 ; C <= N ; C++ ){
    for ( L=1 ; L <= N ; L++){
      printf("%c ", 219);
    }
    printf("\n\n");
  }

  return 0;

}
