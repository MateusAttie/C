#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float y=0,n,cont;
    printf("Digite o valor de n ");
    scanf("%f",&n);
    if(n<=0)
    printf("Digite um valor maior que 0\n ");
    if(n>0)
    for(cont = 0;cont < n;cont++)
    y = y +(1 + cont)/(n - cont);
    printf("Y = %.2f\n ",y);
    system("pause ");
    
}

