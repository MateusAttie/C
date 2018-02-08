#include<stdio.h>
#include<stdlib.h>

typedef struct no{
        int conteudo;
        struct no *prox;
}No;
void imprimir(No *n0);

int main()
{
 No *n0 , *n1 , *n2;
 n0 = (No*)malloc(sizeof(No));    
 n1 = (No*)malloc(sizeof(No));
 n2 = (No*)malloc(sizeof(No));   
 
 n0->conteudo = 3;
 n0->prox = n1;
 
 n1->conteudo = 5;
 n1->prox = n2;
 
 n2->conteudo = 9;
 n2->prox = NULL;
 
 imprimir(n0);
 
 free(n0);
 free(n1);
 free(n2);
 
 system("pause>>NULL");
}

void imprimir(No *n0)
{
 No *p;
 for(p = n0;p != NULL;p=p->prox)
 printf("%d\t",p->conteudo);     
}
