#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define linha 5
#define coluna 100

int main ()
{
         char n[linha][coluna],aux[100];
         int k,j;
         
         for(k = 0;k < 5;k++)
         {
               printf("Digite uma palavra: ");
               gets(n[k]);
         }
         //ordenação
         for(j = 0; j < 5;j++)
           for(k = 0;k < 4;k++)
           {
               if(strcmpi(n[k],n[k+1]) > 0)
               {
                 strcpy(aux,n[k]);
                 strcpy(n[k],n[k+1]);
                 strcpy(n[k+1],aux);
               }
         }
         printf("\n\n");
         for(k = 0;k < 5;k++)
         puts(n[k]);
         
         system("pause");
}
