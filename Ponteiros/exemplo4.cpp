#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *s = "testando!!";
    printf("%p\t%s\n", s, s);//imprimi - endereço de t e 'testando'
    s++;
    printf("%p\t%s\n", s, s);//imrpimi o ndereço de e e 'estando'
    system("PAUSE");
}
