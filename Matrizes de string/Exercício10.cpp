#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define linha 5
#define coluna 100

int main ()
{
         char  n[linha][coluna];
         int k,qtd;
         
         for(k = qtd = 0;k < 5;k++)
         {
         printf("Digite um nome: ");
         gets(n[k]);
         if(tolower(n[k][0]) == 'a' && tolower(n[k][strlen(n[k])-1]) == 'a')
         qtd++;
         }
         printf("Quantidade = %d\n",qtd);
         system("pause");
}
