#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x = 1,y = 1,cont,z;
    cont = 1;
    printf("%d\t\n%d\t\n",x,y);
    while(cont<=20)
    {
     z = x + y;
     printf("%d\t\n",z);
     x = y;
     y = z;
     cont++;
    }
    system("pause");
}
    
