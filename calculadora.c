#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float calculating() {	
	
		char batata[30];
		float num1 = 0;
		float num2 = 0;
		char op;
		
		printf("> ");
		scanf("%[^\n]s", batata);
		setbuf(stdin, NULL);
		//printf("Esse é o valor de 'batata': %s\n", batata);

		sscanf(batata, "%f %c %f" , &num1, &op, &num2);

		//printf("Esse é o valor de 'num1': %.2f\n", num1);
		//printf("Esse é o valor de 'op': %c\n", op);
		//printf("Esse é o valor de 'num2': %.2f\n", num2);

		switch( op )
		{
			case '+':
				printf("%.2f\n" , num1 + num2);
				break;
			case '-':
				printf("%.2f\n", num1 - num2);
				break;
			case '*':
				printf("%.2f\n", num1 * num2);
				break;
			case '/':
				printf("%.2f\n", num1 / num2);	
				break;
		}

}

int base() {

	char batata[30];
	
	if (strcmp(batata, "quit") == 0)
	{
		exit(1);
	} else {
		calculating();
		base();
	}

	}

int main(void) {
	system("clear");
	printf("######################################\n");
	printf("      Iniciando calculadora Mn22.\n");
	printf("######################################\n");
	printf("\nMn22 é uma calculadora simples que com o tempo vai ser aprimorada, para sair digite 'quit'.\n\n");
	printf("Insira um cálculo:\n");
	base();
}
