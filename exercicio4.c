#include <stdio.h>
#include <stdlib.h>
int pares(int n, int* vet);
int main()
{
    int a,i,qtd_pares;
    int *v;
    printf("\nInforme o tamanho do vetor: ");
    scanf("%d",&a);
    v=(int*)malloc(a*sizeof(int));
    printf("\nInforme a seguir o conteudo do vetor:");
    for(i=0;i<a;i++)
    {
         printf("\nPosicao %d: ",i);
         scanf("%d",(v+i));
    }
    qtd_pares = pares(a,v);
    printf("\nO vetor possui %d numeros divisiveis por 3.\n\n",qtd_pares);
    system("PAUSE");
    return 0;
}
int pares(int n,int* vet)
{
    int i, par=0;

    for(i=0;i<n;i++)
    {
         if((*(vet+i)%3)==0)
             par++;
    }
    return par;
}
