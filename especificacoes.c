#include <stdio.h>
#include <stdlib.h>

int help() {
	printf("--cpu | Especificações da CPU\n");
	printf("--memory | Especificações da Memória\n");
	printf("--hd | Especificações do HD\n");
	printf("--net | Especificações da Rede\n");
	return 0;
}

int cpu() {
	system("lscpu");
	return 0;

}

int main(int argc, char* argv[]) {

	char parametrum = argv[1];

	printf("argv[1] = %s\n", argv[1]);

	switch ( parametrum )
	{
		case '--cpu':
			cpu();
			break;
		case '--memory':
			memory();
			break;
		case '--hd':
			hd();
			break;
		case '--net':
			net();
			break;
		default :
			help();
	}
			
	return 0;
}
