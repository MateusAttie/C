#include <stdio.h>
#include <stdlib.h>
int TRUE = 1;
int indice;
struct lista{
       int dado;
       struct lista *ant;
       struct lista *prox;
};
typedef struct lista Lista;
Lista* l3;
Lista* cria()
{
       return NULL;
}
Lista* insere(Lista* l, int v){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->dado = v;
	novo->prox = l;
	novo->ant = NULL;
    if(l != NULL){
         l->ant = novo;
    }
	return novo;
}

Lista* imprime(Lista* l1, Lista* l2, Lista* l3)
{
     Lista* p1 = l1;
     Lista* p2 = l2;
     Lista* p3 = l3;
     indice = 0;
     system("cls");
   printf("\t\tLISTA DIRETA!!\n\n");
	do{
        printf("Dado(%d)Lista(1):%d\tDado(%d)Lista(2):%d\n",indice+1, p1->dado,indice+1, p2->dado);
        p1 = p1->prox;
        p2 = p2->prox;
        indice++;
    }while(p1 != NULL && p2 != NULL);
    indice = 0;
    p1 = l1;
    p2 = l2;
    printf("\n\t\tLISTA REVERSA!!\n\n");
   while(p1->prox != NULL && p2->prox !=NULL)
   {
        p1 = p1->prox;
        p2 = p2->prox;
   }
    do{
        printf("Dado(%d)Lista(1):%d\tDado(%d)Lista(2):%d\n",indice+1, p1->dado,indice+1, p2->dado);
        p1 = p1->ant;
        p2 = p2->ant;
        indice++;
    }while(p1 != NULL && p2 != NULL);

    printf("\n\t\tLISTA INTERCALADA DIRETA!!\n\n");
    do{
        printf("Dado:%d\n",p3->dado);
        p3 = p3->prox;
    
    }while(p3 != NULL);
    p3=l3;
       while(p3->prox != NULL)
   {
        p3 = p3->prox;
   }
   printf("\n\t\tLISTA INTERCALADA REVERSA!!\n\n");
   do{
        printf("Dado:%d\n",p3->dado);
        p3 = p3->ant;
    }while(p3 != NULL);
}
Lista* merge(Lista* l1, Lista* l2){
	int i = 0;
	l3 = insere(l3,(l2->dado+l1->dado));
return l3;
}
int main()
{
  Lista* l1 = cria();
  Lista* l2 = cria();
  l3 = cria();
  int valor;
  while (TRUE)
  {
        system("cls");
        printf("Digite o valor da Lista(1): ");
        scanf("%d", &valor);
        l1 = insere(l1,valor);
        valor = 0;
        printf("Digite o valor da Lista(2): ");
        scanf("%d", &valor);
        l2 = insere(l2,valor);
        l3 = merge(l1,l2);
        imprime(l1,l2,l3);
        TRUE = pergunta();
  }
  system("PAUSE");
  return 0;
}
int pergunta()
{
    int opc;
    volta:;
    printf("\n\nDeseja inserir um novo elemento? 1-SIM e 2-NAO\nSua opcao: ");
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
