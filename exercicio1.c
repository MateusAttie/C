#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *p;
    p =(float*) malloc(5*sizeof(float));
    *(p+0) = 10;
    *(p+1) = 20;
    printf("%.2f",*(p+0)+3.86);
    printf("\n\n");
    system("PAUSE");
    return 0;
}
