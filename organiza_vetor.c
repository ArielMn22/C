#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preenche(int v[], int n);
void ordena(int v[], int n);
void exibe(int v[], int n);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
      int v[5];

        preenche(v,5);
          ordena(v,5);
            exibe(v,5);

              return 0;
}

void exibe(int v[], int n)
{
    int i;

      for(i=0; i<n; i++)
          {
                printf("%d", v[i]);
                  }
}


void ordena(int v[], int n)
{
    int i,j;

      for(i=1; i<n; i++)
          {
                for(j=0; j<n-i; j++)
                      {   
                              if(v[j]> v[j+1])
                                      {   
                                                int x = v[j];
                                                        v[j] = v[j+1];
                                                                v[j+1] = x;
                                                                      }   
                                  }   
                  }
}

void preenche(int v[], int n)
{
    int i;

      for (i=0; i<n; i++)
          {
                printf("Insira o %dº valor:", i + 1); 
                    scanf("%d", &v[i]);
                      }
}

