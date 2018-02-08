#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int valor=0,cont;
    for(cont = 1;cont <= 10;cont++)
    {
    valor = valor + cont;
    }
    printf("%d\n",valor);
    
    system("pause");
}
