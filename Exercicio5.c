#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p[20], i;
    
    p[0] = 1;
    printf("%d\n", p[0]);
    for(i=1;i<20;i++)
    {
        p[i] = p[i-1]+2;
        printf("%d\n", p[i]);
    }

    system("PAUSE");
    return 0;
}
