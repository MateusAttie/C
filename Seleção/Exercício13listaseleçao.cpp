#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float lado1,lado2,lado3,cont;
    printf("Digite o lado 1 do triangulo ");
    scanf("%f",&lado1);
    printf("Digite o lado 2 do triangulo ");
    scanf("%f",&lado2);
    printf("Digite o lado 3 do triangulo ");
    scanf("%f",&lado3);
    if(lado1 == lado2 == lado3)
    printf("Triangulo equilatero\n");
    else
    if(lado1 != lado2 && lado2 == lado3 && lado3 != lado1 || lado1 == lado2 && lado2 != lado3 && lado3!= lado1 || lado1 != lado2 && lado2 != lado3 && lado3 == lado1)
    printf("Triangulo isoceles\n");
    else
    printf("Triangulo escaleno\n");
    system("pause");
} 
