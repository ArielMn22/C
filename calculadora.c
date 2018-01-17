#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float calculating() {	
	
		char user_entry[30];
		char op;
		float num1 = 0;
		float num2 = 0;
		
		char var1[30];
    int number;

		printf("> ");
		scanf("%[^\n]s", user_entry);
		setbuf(stdin, NULL);
		
		//printf("Esse é o valor de 'user_entry': %s\n", user_entry); //checando informações

		sscanf(user_entry, "%f %c %f" , &num1, &op, &num2) || sscanf(user_entry, "%s %c %d", var1, &op, &number) || sscanf(user_entry, "%s", var1);
    /* A parte acima faz vários scans da váriavel "user_entry", desse modo o usuário pode colocar três tipos de entrada */

    /*pointer*/
    char *ponteirodevar;

    ponteirodevar = var1;

	//	printf("Esse é o valor de 'num1': %.2f\n", num1); //checando informações
	//	printf("Esse é o valor de 'op': %c\n", op); //checando informações
	//	printf("Esse é o valor de 'num2': %.2f\n", num2); //checando informações
  //  printf("Esse é o valor de 'var1[5]': %s\n", var1); //checando informações
  //  printf("Esse é o valor de '*ponteirodevar': %s\n", ponteirodevar); //checando informações

		if ( op == '=' ) {

			char user_var[30];
			int user_equality;

			sscanf(user_entry, "%s = %d", user_var, &user_equality);

			//printf("valor de user_var: %s\n", user_var);
			//printf("valor de user_equality: %d\n", user_equality);

		}

    if ( strcmp(ponteirodevar, "quit") == 0 ) {
      exit(1);
    }

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

  while (1) {
    calculating();  
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
