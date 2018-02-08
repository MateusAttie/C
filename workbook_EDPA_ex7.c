#include <stdio.h>
#include <stdlib.h>
void trek(int *q,int *h);
int main()
{
	int a, q = 2, h = 3;
	for(a=0;a<4;a++)
		trek(&q,&h);
	printf("q = %d, h = %d ",q,h);
	system("pause");
	return 0;
}
void trek(int *q,int *h)
{
	(*q)+=5;
	(*h)-=2;
}

