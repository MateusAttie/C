#include<stdio.h>
#include<stdlib.h>

typedef struct no{
       int conteudo;
       struct no *prox;
       struct no *ant;
       }No;

No *primeiro;
No *ultimo;

void inserirInicio(No *novoNo);
void inserirFinal(No *novoNo);
void Remover(int elemento);

int main()
{
 inserirInicio(novoNo);
 inserirFinal(novoNo);
 Remover(elemento);
 system("pause");

}

void inserirInicio(No *novoNo)
{
 if(primeiro!=NULL)//lista nao esta vazia
 {
 novoNo->prox = primeiro;
 primeiro->ant = novoNo;
 primeiro = novoNo;
 }
 else
 {
 if(primeiro==NULL)//lista vazia
 {
 primeiro = novoNo;
 ultimo = novoNo;                          
 }    
    
 }
}

void inserirFinal(No *novoNo)
{
novoNo->prox=NULL;
if(primeiro == NULL)//lista vazia
{
primeiro= novoNo;
}
if(ultimo!=NULL)//lista nao vazia
{
ultimo->prox = novoNo;
novoNo->ant = ultimo;
}
ultimo = novoNo;
}

void inserirMeio(No *novoNo , int posicao)
{
No *Notemp = primeiro;
int NroNos , PosAux;

NroNos = ContarNos();
if(posicao<=0) //Se a posicao que queremos é no inicio
InserirInicio(novoNo);
else
{
if(posicao <= NroNos)
{
 PosAux = 1;
 while(NoTemp!=NULL && posicao > PosAux+1)
 {
 NoTemp = NoTemp->prox;
 PosAux = PosAux+1;
 
 }
}
NovoNo->prox = NoTemp->prox;
NoTemp->prox->ant = NovoNo;
NoTemp->prox = NovoNo;
NovoNo->ant = NoTemp;

}
else{
    if(posicao>NroNos) // Se a posicao que queremos é no final
    InserirFinal(novoNo);
    }
    
 }
 
 void Remover(int elemento)
 {
  No *Notemp = primeiro;
  No *NoAux = primeiro;
  int i , pos = 0;
  
  if(primeiro->conteudo == elemento)
  {
  primeiro = primeiro->prox;
  primeiro->ant = NULL;
  
  }
  else{
       while(Notemp != NULL && Notemp->conteudo != elemento)
       {
       Notemp = Notemp->prox;
       pos += 1;
       }     
       for(i = 0 ; i<=pos ; i++)
             Noaux = NoAux->prox;
             
       if(Notemp != NULL)
         if(Notemp != ultimo)
         {
         Noaux->prox = Notemp->prox;
         (Notemp->prox)->ant = Noaux;
         }
         else
         {
         ultimo = Noaux;
         Noaux->prox = NULL;
         }
  }
 }
