#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 3
void divisor(int *x);
int maior(int *x);
void lervetor(int *x);
void imprimir( int *x);



int main ()
{
    int x[max];
    srand(time(0));
    lervetor(x);
    imprimir(x);
    divisor(x);
    system("pause");
    return 0;

}
void divisor(int *x)//int x[max]
{
  int k,m;
  m = maior(x);
  for(k = -m; k <= m;k++)
        if(k != 0)
            if(m%k == 0)
                printf("%d\t",k);
}
int maior(int *x)
{
    int k,aux = 0;
    for(k = 0; k < max;k++)
        if(x[k] > aux)
        aux = x[k];
    return aux;
}
void lervetor(int *x)
{
    int k;
    for(k = 0;k < max;k++)
        x[k] = rand()% (3* max);

}
void imprimir( int *x)
{
    int k;
    printf("\n");
    for(k = 0;k < max;k++)
        printf("%d\t",x[k]);

}
