#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define max 350

void calcular(char *s,char*p,char*u);


int main()
{
    char s[max],primeiro , ultimo;
    printf("Digite uma string: ");
    gets(s);
    calcular(s,&primeiro,&ultimo);
    printf("%c %c\n",primeiro,ultimo);
    system("pause");
    return 0;


}

void calcular(char *s,char*p,char*u)
{
    *p = s[0];
    *u = s[strlen(s)-1];

}
