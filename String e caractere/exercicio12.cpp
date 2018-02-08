#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char s1[500],s2[500],s3[500];
    int cont,k ;
    printf("Digite uma palavra ");
    gets(s1);
    //retirar espacos da string 1
    for(cont = k = 0;cont < strlen(s1);cont++)
      if(isspace(s1[cont])== 0)
          s2[k++] = s1[cont];
    s2[k] = '\0';
    //inversao da string 2
    cont = strlen(s2) -1;
    for(k = 0 ; k < strlen(s2);k++,cont--)
          s3[k] = s2[cont];
    s3[k] = '\0';
    //verificação
    if(strcmpi(s2,s3)==0)
     printf("A string e um palindromo\n");
    else
     printf("A string nao e um palindromo\n");
    system("pause");
}
     
