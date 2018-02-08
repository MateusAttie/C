#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x = 10,y = 20,*px,*py;
    
    px =&x;
    py =&y;
    printf("%d\n",px);
    printf("%d\n",py);
    if(px < py)//o que esta sendo testado ?
          printf("py - px = %u\n",(py-px));//%u = inteio sem sinal
    else
          printf("px - py = %u\n",(px-py));
    
    py += 6;
    printf("%d\n",px);
    printf("%d\n",py);
    
    system("pause");
}
