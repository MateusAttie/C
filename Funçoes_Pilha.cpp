#include<stdio.h>
#include<stdbool.h>

int topo = -1;
int tamanho = 5;
int pilha[5];

bool pilhaVazia()
{
 if(topo <= -1)
     return true;
 else
     return false;
}
bool pilhaCheia()
{
 if(topo >= tamanho-1)
    return true;
 else
    return false;
}

void empilhar()
{
 if(!pilhaCheia())
 {
  topo = topo + 1;
  pilha[topo] = elemento;
 }
 else
     printf("Pilha Cheia\n");
 
}

int desempilhar()
{
 int desempilhado = -1;
 if(pilhaVazia())
   printf("Pilha Vazia !\n");
 else
 {
  desempilhado = pilha[topo];
  topo = topo-1;
 }
 return desempilhado;
}

int topo()
{
 if(!pilhaVazia)
                return pilha[topo]
 else
 {
 printf("Pilha Vazia\n");
 return -1;
 }
}


void mostrarPilha()
{
 int i;

 for(i = topo;i >= 0;i--)
 {
 printf("Elemento %d posicao %d\n",pilha[i],i);
 }
}
 

main()
{

}
