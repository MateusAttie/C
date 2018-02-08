#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main ()
{
   // Escreva um programa em C que conte o número de vogais presentes em uma string informada via teclado por um usuário. Observação: as letras podem estar grafadas em caixa alta ou caixa baixa.
   char s1[200];
   int  aux,cont,qtd ;
   printf("Digite uma palavra ");
   scanf("%s",&s1);
   for(qtd = cont = 0 ; s1[cont] != '\0';cont++)
   {
   aux = tolower(s1[cont]);
   if(aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u')
   qtd++;
   }
   printf("%d\n",qtd);
   system("pause");
}
   
