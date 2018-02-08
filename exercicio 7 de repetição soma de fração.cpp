#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float y = 0,d = 1;
    
    while(d<=20)
    {
     y= y + 1/d;
     d= d + 1;
     
    }
    printf("y=%.2f\n",y);
    system("pause");   
}
