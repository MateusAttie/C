#include<stdio.h>
#include<stdlib.h>

void incrementa_por_valor(int x)
{
     printf("Dentro de incrementa_por_valor x = %d antes soma 10\n",x);
     x = x + 10;
     printf("Dentro de incrementa_por_valor x = %d depois soma 10\n",x);
}

int main()
{
    int a = 1;
    
    printf("Antes de chamar incrementa_por_valor a = %d\n",a);
    incrementa_por_valor(a);
    printf("Depois de chamar incrementa_por_valor a = %d\n",a);
    system("pause");
}

