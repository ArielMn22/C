#include <stdio.h>

int mensagem() {

 	printf("\e[H\e[2J");
	printf("#####################\n");
	printf("       Olá Mundo     \n");
	printf("#####################\n\n");
	return 0;
}

int nome() {

	char nome[21];
	int idade;

	printf("Digite seu nome:\n");
	scanf("%s", nome);

	printf("Digite sua idade:\n");
	scanf("%i", &idade);

	printf("Seu nome é %s, e você tem %i anos\n", nome,idade);

	return 0;

}

int main(void) {
	mensagem();
	nome();
	return 0;
}
