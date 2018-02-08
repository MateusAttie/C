#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int lim,numer,fat;
    float resp;
    
    printf("Digite um valor para o limite: ");
    scanf("%d",&lim);
    if(lim<=0)
              printf("Limite invalido");
    else
    {
        resp = 0.0;
        fat = 1;
        for(numer = 1;numer<=lim;numer++)
        {
         fat = fat * numer;
         resp = resp +(float) numer/fat;
        }
        printf("X = %.4f\n",resp);
    }
    system("pause");
}


         
