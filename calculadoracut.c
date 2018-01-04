#include <stdio.h>
//opa
int main(void) {

	char calculo;
	float num1,num2;
	char op;
	float result;

	printf("Insira um cálculo:\n");

	scanf("%s", calculo);

	printf("Esse é o valor de calculo: %s", calculo);

	sscanf(calculo, "%f.%c.%f", &num1, &op, &num2);

	result = num1 + num2 ;

	printf("%f", result);

	return 0;
}
