#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define linha 2
#define coluna 3
int main ()

{
    int c[linha][coluna],ct[coluna][linha];
    int i ,j;
    
    srand(time(0));
    for(i = 0;i < linha;i++)
    {
          for(j = 0;j < coluna;j++)
          {
          c[i][j] = rand()%(linha*coluna);
          printf("%d\t",c[i][j]);
          ct[j][i] = c[i][j];
          }
          printf("\n");
    }
          printf("\n");
    
    
    for(i = 0;i < coluna;i++)
    {
          for(j = 0;j < linha;j++)
          {
          printf("%d\t",ct[i][j]);
          }    
          printf("\n");
    }
    system("pause");
}
    
