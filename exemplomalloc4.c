#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *v;
    int n,i;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    v = malloc(n * sizeof(int));
    
    for(i = 0; i < n;i++) //lendo valores
    {
          printf("Digite o valor do elemento %d: ",i);
          scanf("%d",&v[i]);
    }
    for(i = 0;i < n;i++)//imprimindo
          printf("Elemento v[%d] de valor %d \n",i,v[i]);
          
    free(v);
    v = NULL;
    system("pause");
    
}

