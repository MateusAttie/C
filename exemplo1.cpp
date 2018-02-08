#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num = 42;
    char c = 'R';
    
    printf("Valor de num: %d\n ",num);
    printf("Endereco de num: %d\n\n",&num);
    
    printf("Valor de c: %c\n",c);
    printf("Endereco de c: %d\n",&c);
    
    system("pause");
    return(0);
}
