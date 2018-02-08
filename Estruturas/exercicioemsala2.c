#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define max 3

typedef struct{
        float x,y;
}ponto;
typedef struct{
        ponto a,b;
}quadrilatero;

void lerPontos(quadrilatero *q);
void calcularArea(quadrilatero *q);
float calcularBase(quadrilatero q);
float calcularAltura(quadrilatero q);

int main ()
{
quadrilatero q[max];
lerPontos(q);
calcularArea(q);


}


void lerPontos(quadrilatero *q)
{
    int k;
    srand(time(0));
    for(k = 0;k < max;k++)
    {
        q[k].a.x = rand() % 15 + 1;
        q[k].a.y = rand() % 15 + 1;
        q[k].b.x = rand() % 15 + 1;
        q[k].b.y = rand() % 15 + 1;
    }


}

void calcularArea(quadrilatero *q)
{
    int k;
    float base,altura;
    for(k = 0;k < max;k++)
    {
        printf("ponto A (%.2f;%.2f)\n",q[k].a.x,q[k].a.y);
        printf("ponto B (%.2f;%.2f)\n",q[k].b.x,q[k].b.y);
        base = calcularBase(q[k]);
        altura = calcularAltura(q[k]);
        printf("Area = %.2f\n\n",(base*altura));

    }
}
float calcularBase(quadrilatero q)
{
    float base;
    base = sqrt(pow(q.a.x-q.b.x,2));
    return base;
}
float calcularAltura(quadrilatero q)
{
    float altura;
    altura = sqrt(pow(q.a.y-q.b.y,2));
    return altura;
}
