/**********************************************************
* Estrutura de Dados I – NAC 1
* Turma:2ECA
* Aluno: Mateus Attie RM:69807
***********************************************************/

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
int insereElem(Lista *lista,int x);
int removeElem(Lista *lista, int x);

int main()
{
  Lista lista;
  int x;
  inicializar_lista(&lista);  
  lista_vazia(&lista);  
  lista_cheia(&lista);
  insereElem(&lista,x);
  removeElem(&lista,x);  
   system("pause"); 
    
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
}

int insereElem(Lista *lista,int x)
{
  if((*lista).fim == max)
  return -1;
  else
  {
   (*lista).itens[(*lista).fim] = x;
   (*lista).fim++;
   return 1;
      
  }
}      
    
int removeElem(Lista *lista, int x)
{
 int cont;
 if((*lista).fim == 0)
 return -1;
 else
 {
  for(cont = 0;cont < (*lista).fim ;cont++)
  {
           if((*lista).itens[cont] == x)
           {
             for(;cont < (*lista).fim;cont++)
             {
              (*lista).itens[cont] = (*lista).itens[cont+1];
             }
             (*lista).fim--;
             return 1;
           }
  }
   
    return -1;
 }
   
}  

    
    
    
