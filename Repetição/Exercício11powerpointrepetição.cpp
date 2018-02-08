#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int valor , cont;
    printf("Digite um valor inteiro: ");
    scanf("%d",&valor);
    if(valor<0)
    printf("Digite um valor positivo !\n");
    else
    {
     cont = 1;
     while(cont <= valor)
     {
     if(valor%cont==0)
     printf("%d\t\n",cont);
     cont++;
     }
    }
    system("pause");
}
     
       
           
    
    
