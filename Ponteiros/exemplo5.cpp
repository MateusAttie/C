#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[5] = {3, 8, 2, 5, 0};
    int *p, i;
    p = x;//p = endereço d memória da primeira posição de x
    *p = 7;//acessa o conteudo pra onde o p aponta '3'
    p++;//anda 4 bytes
    *p = 0;//atribui o 0 pra onde o p aponta '8'
    p = &x[2];//p = endereço de memoria da posição 2 '2'
    *p = 6;//atribui o 6 pra onde o p aponta - 'x[2]'
    p = x + 3;//p aponta para x[3] , pois x anda 12 bytes desde a primira posição
    *p = 1;//atribui 1 pra onde o p aponta 'x[3]'
    *(p+4) = 9;//anda pa uma regiao de memoria fora do vetor ! nao altera
    p = x;//p = endereço d memória da primeira posição de x
    for(i = 0; i < 5; i++) {
    printf("%d\n", *p);//imprime o conteudo 
    p++;
    }
    system("pause");
}
