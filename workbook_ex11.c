#include <stdio.h>
#include <stdlib.h>
int pergunta();
int TRUE = 1;
int indice = 0;
struct lista{
       char letra;
       struct lista* prox;
};
typedef struct lista Lista;
Lista* cria()
{
       return NULL;
}
Lista* insere_lista1(Lista* l1)
{
       Lista* a = (Lista*)malloc(sizeof(Lista));
       printf("Digite o caracter da lista (1): ");
       scanf(" %c", &a->letra);
       a->prox = l1;
       return a;
}
Lista* insere_lista2(Lista* l2)
{
       Lista* b = (Lista*)malloc(sizeof(Lista));
       printf("Digite o caracter da lista (2): ");
       scanf(" %c", &b->letra);
       b->prox = l2;
       return b;
}
void imprime(Lista* l1, Lista* l2)
{
     Lista* a = l1;
     Lista* b = l2;
     indice = 0;
     if(a && b)do{
            printf("Caracter(%d) Lista(1):%c\tCaracter(%d) Lista(2):%c\n",indice + 1, a->letra,indice + 1, b->letra);
            indice++;
            a = a->prox;
            b = b->prox;
            }while(a!=NULL && b!=NULL);
            printf("\n");
            system("PAUSE");
}
void igual (Lista* l1, Lista* l2)
{
    Lista *n;
    for(n=l1; n!=NULL; n=n->prox)
    {
    if(l1->letra == l2->letra)
              printf("Conteudo Igual\n");
    else
              printf("Conteudo Diferente\n");           
    }                         
}
int pergunta()
{
    int opc;
    volta:;
    printf("Deseja inserir um novo elemento? 1-SIM e 2-NAO\nSua opcao: ");
    scanf("%d", &opc);
                if(opc == 1)
                   {
                          opc=1;
                          return opc;
                   }
                     if(opc == 2)
                   {
                    opc=0;
                     return opc;
                   }
                    if(opc!= 1 && opc!=2)
                   {
                     goto volta;
                   }
                   
}

int main()
{
  Lista* l1;
  Lista* l2;
  l1 = cria();
  l2 = cria();
  while(TRUE)
  {
             system("cls");
             l1 = insere_lista1(l1);
             l2 = insere_lista2(l2);
             imprime(l1,l2);

             TRUE = pergunta();
  }
  igual(l1,l2);
  system("PAUSE");  
  return 0;
}
