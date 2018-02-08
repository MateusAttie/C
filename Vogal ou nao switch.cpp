#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    int op;
    float v1,v2,r;
    printf("Escolha uma operação:\n1. Somar\n2. Subtrair\n3. Multiplicar\n4.Dividir\n");
    scanf("%i",&op);
    if (op<1 || op>4)
    printf("Opçao invalida\n ");
    else
    {
        printf("Digite o primeiro valor\n");
        scanf("%f",&v1);
        printf("Digite o segundo valor\n");
        scanf("%f",&v2);
        if(op == 4 && v2==0)
        printf("Nao existe divisao por zero\n");
        else
        {
            switch(op)
            {
                      case 1:
                           r=v1+v2;
                      break;
                      case 2:
                           r=v1-v2;
                      break;
                      case 3:
                           r=v1*v2;
                      break;
                      case 4:
                           r=v1/v2;
                      break;
                      }          
                      printf("O resultado eh: %f ",r);
                           
                           
            
        }    
    }   
    system("PAUSE");
    return (0);
}
