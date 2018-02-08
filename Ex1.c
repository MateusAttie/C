#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct no
{
    int conteudo;
    struct no *prox;
} No;

No *primeiro = NULL;
No *ultimo = NULL;

int posicao;

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


int minimo(No *lista)
{
    if(lista == NULL)
    return -1;
    else
    {
    int menor;
    No *p;
    p = lista;

    menor = p->conteudo;

    while(p != NULL)
    {
            if (p->conteudo < menor)
               menor = p->conteudo;

            p = p->prox;
    }

    return menor;
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
    int menor = minimo(primeiro);

    printf("O menor valor é: %d", menor);

    system("pause");

}
