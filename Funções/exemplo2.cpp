#include<stdio.h>
#include<stdlib.h>

void calcular(int v);

int main ()
{
    int valor;
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d",&valor);
    if(valor <= 0)
             printf("O valor deve ser positivo e maior que 0");
    else
        calcular(valor);
 system("pause");
}                
void calcular(int v)
{
     int k;
     for(k = 1;k <= v;k++)
           if(v%k == 0)
                  printf("%d\t",k);
}
