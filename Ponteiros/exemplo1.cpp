#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x = 10;
    int *p;
    
    printf("%p\n",&x);
    printf("%p\n",&p);
    
    p = &x;
    
    printf("%d\n",x);
    printf("%p\n",p);
    
    *p = 20;
    
    printf("%d\n",x);
    printf("%p\n",p);
    
    
    system("pause");
}
