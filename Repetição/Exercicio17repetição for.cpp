#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int quantidade , cont,cont2 = 1;
    printf("Digite a quantidade de numeros que deseja: ");
    scanf("%d",&quantidade);
    if(quantidade < 1)
    printf("Quantidade Invalida\n ");
    else
    {
    for(cont = 2; cont2 <= quantidade; cont +=  2)
    {
    printf("%d\n",cont);
    cont2++;
    }
    }
    system ("pause");
}
