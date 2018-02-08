#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 10

void lervetor(int *x);
void imprimir(int *x);

int main ()
{
    int x[max];
    srand(time(0));

    lervetor(x);
    imprimir(x);

    return 0;


}

void lervetor(int *x)
{
    int k;
    for(k = 0;k < max;k++)
        x[k] = rand()%(3*max);

}
void imprimir(int *x)
{
    int k;
    printf("\n");
    for(k = 0;k < max;k++)
        printf("%d\t",x[k]);

}
