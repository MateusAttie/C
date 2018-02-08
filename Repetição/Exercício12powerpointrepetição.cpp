#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int valor,cont,quantidade;
    cont=1;
    quantidade=0;
    while(cont <= 15)
    {
    printf("Digite um valor: ");
    scanf("%d",&valor);
    if(valor > 30)
    quantidade++;
    cont++;
    }
    printf("Quantidade = %d ",quantidade);
    system("pause");
}
