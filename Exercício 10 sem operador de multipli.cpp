#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x,y,cont,r;
    printf("Digite um valor inteiro positivo ");
    scanf("%d",&x);
    printf("Digite outro valor inteiro e positivo ");
    scanf("%d",&y);
    if(x<0 || y<0)
           printf("Os valores devem ser inteiros e positivos seu burrao!\n");
    else
    {
     if(x==0 || y==0)
             printf("%d * %d = 0\n",x,y);
     else
     {
       r = 0;
       cont = 1;
       while(cont<=y)
       {
          r = r + x;
          cont++;
       }       
     printf("%d\n",r);
     }
    }
    system("pause");
}
