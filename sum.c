#include <stdio.h>

int main(void) {

	float value1;
	float value2;
	float value3;
	char oper;

	printf("Digite um valor: ");
	scanf("%f", &value1);

	printf("Digite um operador: ");
	scanf(" %c", &oper);

	printf("Digite um segundo valor: ");
	scanf("%f", &value2);
	
	switch( oper )
	{
		case '+':
			printf("%.1f\n", value1 + value2);
			break;
		case '-':
			printf("%.1f", value1 - value2);
			break;
		case '*':
			printf("%.1f", value1 * value2);
			break;
		case '/':
			printf("%.1f", value1 / value2);
			break;
	}

	return 0;

}
