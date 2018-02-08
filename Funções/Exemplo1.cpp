#include<stdio.h>
#include<stdlib.h>

void imprimir(int x , int y)
{
     int r;
     r = x + y;
     printf("r = %d\n",r);
}
int main ()
{
 int x = 5 , y = 3;
 imprimir(x , y);
 
system("pause");
}   
