#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *s,k,w=1;
    s=(int*)malloc(12*sizeof(int));
    for(k=0;k<12;k++)
    {
        *(s+k)=w;
        w = w + 2;
        printf("\n\nA posicao %d de s tem: %d",k,*(s+k));
    }
    printf("\n\n%d\n", *(s+3)+19);
    system("pause");
    return 0;
}
