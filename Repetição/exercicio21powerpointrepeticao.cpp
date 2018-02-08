#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int n,cont ;
    float y = 0;
    printf("Digite o valor de n ");
    scanf("%d",&n);
    if(n<=0)
    printf("Digite um valor maior que 0\n ");
    else
   {
    for(cont = 1;cont <= n;cont++)
    if(cont%2 ==0)
    y = y -(float)(1 )/( cont );
    else
    y = y +(float) (1)/( cont );
    printf("Y = %.2f\n ",y);
   }
    system("pause");
}
