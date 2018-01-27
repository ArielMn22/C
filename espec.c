#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int help() {
	printf("1 | Especificações da CPU\n");
	printf("2 | Especificações da Memória\n");
	printf("3 | Especificações do HD\n");
	printf("4 | Especificações da Rede\n");
	return 0;
}

int cpu() {
  printf("__Especificações da CPU__\n\n");
	system("lscpu");
	return 0;
}

int memory() {
  printf("__Especificações da Memória__\n\n");
  system("cat /proc/meminfo");
  return 0;
}

int hd() {
  printf("__Particionamento do HD__\n\n");
  system("lsblk");
  return 0;
}

int net() {
  printf("__ Teste de Conexão __\n\n");
  system("ping -c 5 uol.com.br");
  return 0;
}

int escolha(char* argv[]) {

	int parametrum = 0;

  parametrum = atoi( argv[1] );

	switch ( parametrum )
	{
		case 1:
      system("cls || clear");
			cpu();
			break;
		case 2:
      system("cls || clear");
			memory();
			break;
		case 3:
      system("cls || clear");
			hd();
			break;
		case 4:
      system("cls || clear");
			net();
			break;
		default :
      printf("Parâmetro inválido. Insira um dos parâmetros disponíveis\n\n");
			help();
      return 1;
	}

  printf("\nAperte [QUALQUER TECLA] para sair\n");

  system("read b");

}

int main(int argc, char* argv[]) {

  if ( argc == 1 )
  {
    printf("Adicione algum parâmetro:\n\n");
    help();
  } else {
      escolha(argv);
  }

	return 0;
}
