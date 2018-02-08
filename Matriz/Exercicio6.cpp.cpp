#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ordem 4
int main ()

{
    int tabela[ordem][ordem],i,j,maior = 0;
    srand(time(0));
    for(i = 0; i < ordem;i++)
    {
          for(j = 0 ; j < ordem;j++)
          {
          tabela[i][j] = rand()%(ordem*ordem);
          printf("%d\t",tabela[i][j]);
          if(tabela[i][j] > maior)
          maior = tabela[i][j];
          
          }
          printf("\n");
    }
        printf("maior valor = %d\n",maior);
    for(i = 0;i < ordem;i++)
       for(j = 0; j < ordem ; j++)
          if(tabela[i][j] == maior)
              printf("linha = %d coluna = %d\n",i,j);
          
    system("pause");
}
