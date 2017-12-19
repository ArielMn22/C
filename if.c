#include <stdio.h>

  //NOT READY

int main(void) {

  char gender;
  
  printf("Você eh benino ou benina?\n");
  scanf("%s", &gender);

  if (gender == "menino") {
    printf("Você é um menino\n");
  } else {
    printf("Você é menina\n");
  }

  return 0;

}
