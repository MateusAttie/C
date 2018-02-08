#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float delta(float a,float b,float c);
void raizes(float a,float b,float d,float *r1,float*r2);

int main ()
{
float a,b,c,d,r1,r2;
printf("Digite o valor do coeficiente 'a','b' e 'c': ");
scanf("%f %f %f",&a,&b,&c);
if(a == 0)
    printf("Os valores nao formam uma equação do segundo grau !\n");
else
{
d = delta(a,b,c);
if(d < 0)
    printf("Essa equacao nao possui raiz real\n");
else
{
printf("Delta = %.2f\n ",d);
raizes(a,b,d,&r1,&r2);
printf("Raizes = %.2f ; %.2f ",r1,r2);
}
}
return 0;
}
float delta(float a,float b,float c)
{
    float d;
    d = pow(b,2)- 4*a*c;
    return d;
}
void raizes(float a,float b,float d,float *r1,float*r2)
{

    *r1 = (- (b) + (sqrt(d))) / (2*a);
    *r2 = (- (b) - (sqrt(d))) / (2*a);
}
