#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu();
void bin();
void exibe(int v[], int n);

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
	char x;
	do
	{
  	menu();
		
		printf("Deseja continuar: ");
		scanf("%c", &x);

	} while(x != 's');

  return 0;
}

void bin()
{
  int i, user_entry, bin[9];
	
	printf("Entre com um número: ");
	scanf("%d", &user_entry);
	
	for (i=0; i<9; i++)
	{
		bin[i] = user_entry % 2;
		user_entry /= 2;
	}

	exibe(bin, 9);
}

void exibe(int v[], int n)
{
	int i;

	for	(i=0; i<n ;i++)
	{
		printf("%d", v[i]);
	}
	printf("\n\n");
}

void menu()
{
  char escolha;

  printf("1 - Converte Decimal para binário");
  printf("2 - Converte Decimal para octal");
  printf("3 - Converte Decimal para hexadecimal");

  escolha = getch();

  switch(escolha)
  {
    case '1':
      bin();
      break;
    case '2':
      //octa();
      break;
    case '3':
      //hexa();
      break;
    default:
      printf("Opção inválida.\n");
      system("pause || read b");
  }   
}
