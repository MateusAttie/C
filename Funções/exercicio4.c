#include<stdio.h>
#include<stdlib.h>
int mdc(int x , int y);
int main()
{
    int x,y,m;
    printf("Digite dois valores inteiros e positivos: ");
    scanf("%d %d ",&x,&y);
    if(x > 0 && y > 0)
    {
        m = mdc(x,y);
        printf("mdc(%d %d) = %d\n",x,y,m);

    }
    else
        printf("Os valores devem ser positivos\n");
    system("pause");
    return 0;
}

int mdc(int n1 , int n2)
{
    int resto = n1 % n2;
    while(resto != 0)
    {
        n1 = n2;
        n2 = resto;
        resto = n1 % n2;

    }
    return n2 ;
}



