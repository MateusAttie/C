#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define ordem 3

void lermatriz(int x[ordem][ordem]);
void imprimir(int x[ordem][ordem]);
void trocar(int x[ordem][ordem]);

int main ()
{
    int x[ordem][ordem];
    srand(time(0));

    lermatriz(x);
    imprimir(x);
    trocar(x);
    imprimir(x);

    system("pause");
    return 0;

}
void lermatriz(int x[ordem][ordem])
{
    int i,j;
    for(i = 0;i < ordem;i++)
        for(j = 0;j < ordem;j++)
            x[i][j] = rand()%(ordem*ordem*2);
}
void imprimir(int x[ordem][ordem])
{
    int i,j;
    for(i = 0;i < ordem;i++)
    {
        for(j = 0;j < ordem;j++)
           printf("%d\t",x[i][j]);
            printf("\n");
    }
printf("\n");
}
void trocar(int x[ordem][ordem])
{
 int i,j,aux;
 for(i = 0,j = ordem-1;i < ordem;i++,j--)
 {
     aux = x[i][j];
     x[i][j] = x[i][j];
     x[i][j] = aux;
 }

}
