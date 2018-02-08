#include<stdio.h>
#include<stdlib.h>
#define size 3
int main ()
{
  a-)  int tabela[3][3];
       int tabela[size][size];
  b-)  printf("%d",size*size);
  
  c-)  for(x = 0; x < size;x++)
          for( y = 0;y < size;y++)
               tabela [x][y] = x + y;
  d-)  for(x = 0; x < size;x++)
       {
       for(y = 0; y < size;y++)
           printf("%d\t",tabela[x][y]);
       printf("\n");
       }        
