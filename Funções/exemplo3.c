#include<stdio.h>
#include<stdlib.h>
//prototipo da funçao(cabeçalho)
int somar(int x , int y);
float media(int x, int y);

int main ()
{
  int x , y , r;
  float m;
  printf("Digite o primeiro valor: ");
  scanf("%d",&x);
  printf("Digite o segundo valor: ");
  scanf("%d",&y);
  r = somar(x,y);//x e y são denominados ARGUMENTOS
  m = media(x,y);
  printf("Resultado = %d\n",r);
  printf("Media = %.2f\n",m);
  return 0;//opcional
}

int somar(int x , int y)//parametro
{
   int r;
   r = x + y;
   return r;

}
float media(int x,int y)
 {
     float m;
     m = (float) somar(x , y) / 2;
     return m;
 }
