#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int a[3][2],b[2][3],c[3][3];
    int i , j , k;
    
    srand(time(0));
    printf("Matriz A: \n");
    for(i = 0;i < 3;i++)
    {
      for(j = 0;j < 2;j++)
      {
       a[i][j] = rand() % (3*2);
       printf("%d\t\t",a[i][j]);
       }
       printf("\n");
    }
    printf("\n");
    printf("Matriz B: \n");
    for(i = 0;i < 2;i++)
    {
      for(j = 0; j < 3;j++)
      {
       b[i][j] = rand()%(3*2);
       printf("%d\t\t",b[i][j]);
      }
      printf("\n");
    }
    //multiplicacao
    for(i = 0;i < 3;i++)
    {
     for(j = 0;j < 3;j++)
     {
      c[i][j] = 0;
      for(k = 0;k < 2;k++)
      {
       c[i][j] += a[i][k]*b[k][j];
      }
     }
    }
    printf("\nMatriz C: \n");
    for(i = 0;i < 3;i++)
    {
     for(j = 0;j < 3;j++)
     { 
           printf("%d\t\t",c[i][j]);
     }
     printf("\n");
    }
    system("pause");
}
    
    
    
    
    
    
    
    
    

