#include <stdio.h>
#include <stdlib.h>
struct lista
{
    int info;
    struct lista* prox;
};
typedef struct lista Lista;
Lista* lst_cria(void)
{
    return NULL;
}
Lista* lst_insere(Lista* l,int i)
{
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo -> info = i;
    novo->prox = l;
    return novo;
}
void lst_imprime(Lista* l)
{
    Lista* p;
    for(p=l;p!=NULL;p=p->prox)
        printf("Info=%d\n",p->info);
}
int comprimento(Lista* l)
{
    int c=0;
    Lista *n;
    for(n=l;n != NULL; n=n->prox)
    	c = c + 1;
    	
    return c;
}
int main()
{
    int i,c,resp=1;
    Lista* l;

    l = lst_cria();
    while(resp==1)
    {
        printf("Digite o valor: ");
        scanf("%d",&i);
        l = lst_insere(l,i);
        c = comprimento(l);
        printf("\nLista Atualizada:\n");
        lst_imprime(l);
        printf("\nComprimento: %d nos.\n",c);
        printf("Inserir mais um no? 1-SIM e 2-NAO\n ");
        scanf("%d", &resp);
    }
    system("PAUSE");
    return 0;
}

