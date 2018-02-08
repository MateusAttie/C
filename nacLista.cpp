#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5

typedef struct {
       int itens[max];
       int fim;
       }Lista;
void inicializar_lista(Lista *lista);
bool lista_vazia(Lista *lista);
bool lista_cheia(Lista *lista);

int main()
{
  Lista lista;
  inicializar_lista(lista);  
  lista_vazia(lista);  
  lista_cheia(lista);
    
    
    
    
}

void inicializar_lista(Lista *lista)
{
 (*lista).fim = 0;
     
}


bool lista_vazia(Lista *lista)
{
 if((*lista).fim == 0)
 return true;
 else
 return false;     
     
}

bool lista_cheia(Lista *lista)
{
 if((*lista).fim == max)
 return true;
 else
 return false;     
