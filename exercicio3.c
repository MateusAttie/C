#include <stdio.h>
#include <stdlib.h>
void inc_dec(int *a,int *b);
int main()
{
    int i, a = 2, b = 3;
    for(i=0;i<3;i++)
         inc_dec(&a,&b);
    printf("a = %d, b = %d ",(--a),b);
    system("PAUSE");
    return 0;
}
void inc_dec(int *a,int *b)
{
    (*a)+=3;
    (*b)--;
}
