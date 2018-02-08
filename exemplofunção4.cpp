#include<stdio.h>
#include<stdlib.h>

void incrementa_por_valor(int *y);

int main()
{
    int b = 1;
    
    printf("Antes de chamar incrementa_por_valor b = %d\n",b);
    incrementa_por_valor(&b);
    printf("Depois de chamar incrementa_por_valor b = %d\n",b);
    system("pause");
}

void incrementa_por_valor(int *y)
{
     printf("Dentro de incrementa_por_valor y = %d antes soma 10\n",*y);
     *y = *y + 10;
     printf("Dentro de incrementa_por_valor y = %d depois soma 10\n",*y);
}
