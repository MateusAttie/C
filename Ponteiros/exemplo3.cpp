#include <stdio.h>
#include <stdlib.h>
int main()
{
int x[5] = {1, 2, 3, 4, 5};
int i;
printf("%d\n",x);
for(i = 0; i < 5; i++)
printf("%d\t%d\n",(x + i), x[i]); //printf("%d\n", *(x++);
system("PAUSE");
}
