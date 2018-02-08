#include <stdio.h>
#include <stdlib.h>
int pergunta(),pergunta2();
int TRUE = 1,TRUE2 = 1;
struct lista
{
       int dado;
       struct lista* ant;
       struct lista* prox;
};
typedef struct lista Lista;
Lista* cria(int v)
{
       Lista* novo = (Lista*)malloc(sizeof(Lista));
       novo->dado = v;
       novo->prox = novo;
       novo->ant = novo;
       return novo;
}
Lista* insere(Lista* l1, Lista* temp, int v)
{
       Lista* p1 = l1;
       Lista* novo = (Lista*)malloc(sizeof(Lista));
       novo->dado = v;
       novo->prox = p1;
       novo->ant = temp;
       temp->prox = novo;
       p1->ant = novo;
       return novo;
}

Lista* separa(Lista* l1,Lista* temp,int n)
{
    Lista* p1;
    int indice;
    for(p1=l1; p1!=temp; p1=p1->prox) {
            while(p1->dado != n){
               printf("Lista 1: Valor(%d):%d\n",indice+1, p1->dado);
               indice++;
               p1=p1->prox;
               }
                indice=0;
            if(p1->dado==n){
            while(p1!=l1){
               printf("Lista 2: Valor(%d):%d\n",indice+1, p1->dado);
               p1=p1->prox;
            }
            }
            return p1;

    }
    printf("Valor nao encontrado.\n");
    return p1;
}
void imprime(Lista* l1)
{
     Lista* p1 = l1;
     int indice=1;
     printf("Lista Direta:\n");
     do{
                printf("Lista 1: Valor(%d):%d\n",indice, p1->dado);
                p1=p1->prox;
                indice++;
     }while(p1!=l1);
     indice--;
     p1=p1->ant;

     printf("Lista Reversa:\n");
     do{
                printf("Lista 1: Valor(%d):%d\n",indice, p1->dado);
                p1=p1->ant;
                indice--;
     }while(p1!=l1);
     if(indice>0)
     {
         printf("Lista 1: Valor(%d):%d\n",indice, p1->dado);
     }
}
int main()
{
    Lista* l1;
    Lista* temp;
    int a=0,b=0;
    printf("Digite o Dado a ser inserido na lista: ");
    scanf("%d", &a);
    l1 = cria(a);
    temp = l1; // variável temporária para guardar o endereço de l1 inicial
    imprime(l1);
    TRUE = pergunta();
    while(TRUE)
    {
         system("cls");
         printf("Digite o Dado a ser inserido na lista: ");
         scanf("%d", &a);
         l1 = insere(l1,temp,a);
         imprime(l1);
         TRUE = pergunta();
    }
    TRUE2 = pergunta2();
    if(TRUE2)
    {
        system("cls");
        printf("Em qual valor deseja separar a lista: ");
        scanf("%d", &b);
        l1 = separa(l1,temp,b);
    }
    system("PAUSE");
    return 0;
}
int pergunta()
{
    int opc;
    volta:;
    printf("Deseja inserir um novo elemento? 1-SIM; 2-NAO\nSua opcao: ");
    scanf("%d", &opc);
    if(opc == 1)
    {
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
int pergunta2()
{
    int opc;
    volta2:;
    printf("Deseja encerrar ou dividir a lista? 1-DIVIDIR; 2-FIM\nSua opcao: ");
    scanf("%d", &opc);
    if(opc == 1)
    {
       return opc;
    }
    if(opc == 2)
    {
        opc=0;
        return opc;
    }
    if(opc!= 1 && opc!=2)
    {
        goto volta2;
    }
}
