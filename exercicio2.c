#include <stdio.h>
#include <stdlib.h>
float tipo1=0,tipo2=0,tipo3=0;
int numero=0;
struct pizzaria
{
    char nome[80];
    int sabor;
};
void faz_pedido()
{
     numero++;
     struct pizzaria *c;
     c =(struct pizzaria *) malloc(sizeof(struct pizzaria));
     fflush(stdin);
     printf("\nDigite o nome do cliente: ");
     gets(c->nome);
     printf("\nDigite o sabor da pizza requisitada, conforme menu de opcoes: ");
     printf("\n1. Mussarela\n2. Calabresa\n3. Marguerita\n");
     scanf("%d",&c->sabor);
     if(c->sabor==1)
          tipo1++;
     else if(c->sabor==2)
          tipo2++;
     else
          tipo3++;
}
void calcula()
{
     tipo1 = (tipo1*100)/numero;
     tipo2 = (tipo2*100)/numero;
     tipo3 = (tipo3*100)/numero;
}
void apresenta()
{
     printf("\nForam requisitadas %d pizzas. Das quais:",numero);
     printf("\n%0.2f porcento foram de mussarela",tipo1);
     printf("\n%0.2f porcento foram de calabresa",tipo2);
     printf("\n%0.2f porcento foram de marguerita\n",tipo3);
}
int main()
{
     int escolha;
aqui:;
     printf("\nDigite:\n1 para abrir pedido.\n2 para calcular.\n3 para apresentar resultados.\n4 para encerrar.\n");
     scanf("%d",&escolha);
     switch(escolha)
     {
          case 1:
               faz_pedido();
          break;
          case 2:
               calcula();
          break;
          case 3:
               apresenta();
          break;
          case 4:
               goto encerra;
          break;
          default:
               goto aqui;
     }
     goto aqui;
encerra:;
     return 0;
}
