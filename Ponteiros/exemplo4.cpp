#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *s = "testando!!";
    printf("%p\t%s\n", s, s);//imprimi - endere�o de t e 'testando'
    s++;
    printf("%p\t%s\n", s, s);//imrpimi o ndere�o de e e 'estando'
    system("PAUSE");
}
