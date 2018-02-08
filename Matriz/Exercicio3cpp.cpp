#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ordem 4
int main ()

{
    int tabela[ordem][ordem],i,j;
    srand(time(0));
    for(i = 0; i < ordem;i++)
    {
          for(j = 0 ; j < ordem;j++)
          {
          tabela[i][j] = rand()%(ordem*ordem);
          printf("%d\t",tabela[i][j]);
          }
          printf("\n");
    }
    system("pause");
}
