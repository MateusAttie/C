#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float y = 0,cont = 1,n;
    printf("Digite o ultimo divisor: ");
    scanf("%f",&n);
    while(cont<=n)
    {
     y= y + 1/cont; 
     cont++;
     
    }
    printf("Y=%.2f\n",y);
    system("pause"); 
}
