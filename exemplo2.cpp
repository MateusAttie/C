#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;
    int num ;
    p = &num ;
    *p = 42; //conteudo da memoria apontada por p recebe 42
    
    printf("Valor de num: %d\n",num);
    printf("Valor de *p: %d\n ",*p);
    printf("Endereco de num : %d\n ",&num);
    printf("Valor de p : %d\n\n",p);
    
    system("pause");
    return(0);
}
