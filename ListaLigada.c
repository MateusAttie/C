#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no
{
   int conteudo;
   struct no *prox;
} No;

No *primeiro = NULL;
No *ultimo = NULL;
int posicao;

bool ListaVazia()
{
   if (primeiro == NULL && ultimo == NULL)
   {
      return true;
   }
   else
   {
      return false;
   }
}

void InserirInicio (No *novoNo)
{
  if (primeiro != NULL)
  {
    novoNo->prox = primeiro;
    primeiro = novoNo;
  }
  else
  {
      if (primeiro == NULL)
      {
         primeiro = novoNo;
         ultimo = novoNo;
      }
   }
}

void InserirFinal (No *novoNo)
{
   novoNo->prox = NULL;
   if (primeiro == NULL)
   {
      primeiro = novoNo;
   }
   if (ultimo != NULL)
   {
      ultimo->prox = novoNo;
   }
   ultimo = novoNo;
}

int ContarNos ()
{
   int tamanho = 0;
   No *NoTemp = primeiro;

   while (NoTemp != NULL)
   {
      tamanho = tamanho + 1;
      NoTemp = NoTemp->prox;
   }
   return tamanho;
}

void InserirMeio(No *NovoNo, int posicao)
{
   No *NoTemp = primeiro;
   int NroNos, PosAux;

   NroNos = ContarNos();
   if (posicao == 0) 
   {
        NovoNo->prox = primeiro;
        if (primeiro == ultimo)
        {
           ultimo = NovoNo;
        }
        primeiro = NovoNo;
   } 
   else
   {
     if (posicao <= NroNos)
     {
        PosAux = 1;
        while (NoTemp != NULL && posicao > PosAux)
        {
           NoTemp = NoTemp->prox;
           PosAux = PosAux + 1;;
        }
        NovoNo->prox = NoTemp->prox;
        NoTemp->prox = NovoNo;
     }
     else
     {
        if (posicao > NroNos)
        {
           ultimo->prox = NovoNo;
           ultimo = NovoNo;
        }
     }
   }
}


void Remover(int conteudo)
{
   No *NoTemp = primeiro;
   No *NoAux = primeiro;
   int i, pos = 0;

   if (primeiro->conteudo == conteudo)
   {
        primeiro = primeiro->prox;
   }
   else
   {
     while (NoTemp != NULL && NoTemp->conteudo != conteudo)
     {
        NoTemp = NoTemp->prox;
        pos = pos + 1;
     }
     for (i = 1 ; i <= pos - 1 ; i++)
     {
           NoAux = NoAux->prox;
     }
     
     if (NoTemp != NULL)
     {
        if (NoTemp != ultimo)
        {
            NoAux->prox = NoTemp->prox;
        }
        else
        {
          ultimo = NoAux;
          NoAux->prox = NULL;
         }
     }
   }
}

void ElementoInicio()
{
    if (!ListaVazia())
    {
       printf("O elemento do início da lista ligada é %d", primeiro->conteudo);
    }
    else
    {
       printf("Lista Ligada Vazia!");
    }
}


void ElementoFinal( )
{
    if (!ListaVazia())
    {
       printf("O elemento do final da lista ligada é %d", ultimo->conteudo);
    }
    else
    {
       printf("Lista Ligada Vazia!");
    }
}

No *BuscaNo (int conteudo)
{
   int i = 0;
   No *NoTemp = primeiro;

   while (NoTemp != NULL)
   {
      if (NoTemp->conteudo == conteudo)
      {
           printf("Elemento %d posição %d\n", NoTemp->conteudo, i);
           return NoTemp;
       }
       i = i + 1;
       NoTemp = NoTemp->prox;
   }
   return NULL;
}

void MostrarLista()
{
   int i = 0;
   No *NoTemp = primeiro;

   while (NoTemp != NULL)
   {
      printf("Elemento %d posição %d\n", NoTemp->conteudo, i);
      NoTemp = NoTemp->prox;
      i = i + 1;
   }
}

main()
{
      int i, conteudo;
      
      for(i = 0; i < 5; i++)
      {
            printf("Digite um numero: ");
            scanf("%d", &conteudo);
            //Cria um novo nó em memória
            No *novoNo;
            novoNo = (No*)malloc(sizeof(No));
            novoNo->conteudo = conteudo;
            novoNo->prox = NULL;
            //Insere o novo nó criado na lista
            InserirFinal(novoNo);
      }
      
      
      MostrarLista();
      
     
      system("pause");
}


