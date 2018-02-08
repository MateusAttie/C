#include<stdio.h>
#include<stdlib.h>
typedef struct no{
        int conteudo;
        struct no *prox;
        }No;
int elementoMinimo(No *lista);
void removerElemento(No *lista , int y);

int main ()
{
    No lista;
    int menor,y;
    menor = elementoMinimo(&lista);
    removerElemento(&lista,y);
    system("pause");
    return 0;
}

int elementoMinimo(No *lista) 
{
    No *p;
    p = lista;
    int menor;
    
    menor = p->conteudo;
    
    while(p != NULL){
            if(p->conteudo < menor)
            {
            menor = p->conteudo;
            }
            p = p->prox;
            }    
            return menor;
}

void removerElemento(No *lista , int y)
{
     No *p;
     for(p = lista; p != NULL ; p->prox)
     {
           if(p->conteudo == y)
           p = p->prox;
     }
}
