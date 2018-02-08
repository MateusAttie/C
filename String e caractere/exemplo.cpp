#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char p[250];
    char c;
    puts("Digite uma palavra ");
    //printf("Digite uma palavra ");
    gets(p);
    //scanf("%s",&p);
    printf("Digite uma letra ");
    //fflush(stdin);
    c = getchar();
    //scanf("%c",&c);
    puts(p);
    //printf("%s\n",p);
    putchar(c);
    //printf("%c\n",c);
    
    system("pause");
}
