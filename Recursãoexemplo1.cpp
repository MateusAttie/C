#include<stdio.h>
#include<stdlib.h>

int fat(int n);

int main()
{
 int n = 5;
 printf("O fatorial de %d eh %d\n\n",n , fat(n));
 system("pause");


}

int fat(int n)
{
 int f;
 
  if(n==0)
          return 1;//regra 1
  else
  {
   //chamada de função recursiva
   f = n * fat(n-1);//regra 2
   return f;     
  }
 
}
