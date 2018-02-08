#include<stdlib.h>
#include<stdio.h>


int maior(int x,int y ,int z);
int main ()
{
int x , y ,z;
int m;

printf("Digite 3 valores:  ");
scanf("%d %d %d",&x,&y,&z);
m = maior(x,y,z);
printf("Maior valor = %d\n",m);
return 0;
}
int maior(int x,int y ,int z)
{
int m;
if(x > y && x > z)
    m = x;
else
   if(y > z)
    m = y;
else
    m = z;
return m;
}
