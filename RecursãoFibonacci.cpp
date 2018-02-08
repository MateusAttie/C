#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n);

int main()
{
 int x;
 int n = 11;
 
 x = fibonacci(n);
 printf("O ultimo valor da sequencia eh: %d\n",x);
 system("pause");

}

int fibonacci(int n)
{
 if(n == 0 || n == 1)
      return n;
 else
     return (fibonacci(n-1) + fibonacci(n-2));
 
}
