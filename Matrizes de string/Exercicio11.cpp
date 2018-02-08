#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define linha 5
#define coluna 100

int main ()
{
         char n[linha][coluna];
         int k,maior;
         
         for(k = maior = 0;k < 5;k++)
         {
         printf("Digite um nome: ");
         gets(n[k]);
         if(strlen(n[k]) > maior)
         maior = strlen(n[k]);
         }
         printf("\n");
         for(k = 0;k < 5;k++)
           if(strlen(n[k]) == maior)
           puts(n[k]);
         system("pause");
    }
         
