#include<stdio.h>
#include<stdlib.h>

typedef struct no{
        int conteudo;
        struct no *prox;
}No;
void imprimirSemCabeca(No *inicio);
void imprimirComCabeca(No *inicio);

int main()
{
 No inicio;   
 imprimirSemCabeca(&inicio); 
 imprimirComCabeca(&inicio); 
}
//lista sem cabeça
void imprimirSemCabeca(No *inicio)
{
 No *p;
 for(p = inicio;p != NULL;p=p->prox)
 printf("%d",p->conteudo);     
}
//lista com cabeca
void imprimirComCabeca(No *inicio)
{
 No *p;
 for(p = inicio->prox;p != NULL;p=p->prox)
 printf("%d",p->conteudo);     
}
