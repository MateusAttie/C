#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float base,altura,raio,areare,areaci,perimetrore,perimetroci;
    printf("Digite a base do retangulo: ");
    scanf("%f",&base);
    printf("Digite a altura do retangulo: ");
    scanf("%f",&altura);
    printf("Digite o raio da circunferencia: ");
    scanf("%f",&raio);
    
    areare = base * altura;
    areaci = 3.14 * raio * raio;
    perimetrore = 2*base + 2*altura;
    perimetroci = 2 * 3.14 * raio;
    
    printf("Area do retangulo = %.2f\n ",areare);
    printf("Area do circulo  = %.2f\n ",areaci);
    printf("Perimetro do retangulo = %.2f\n ",perimetrore);
    printf("Perimetro do circulo = %.2f\n ",perimetroci);
    
    if(areare < areaci)
    printf("A area do retangulo e menor do que a area do circulo\n ");
    else
    printf("A area do circulo e menor do que do retangulo\n ");
    if(perimetrore > perimetroci )
    printf("O perimetro do retangulo e maior do que do circulo\n ");
    else
    printf("O perimetro do circulo e maior do que do retangulo\n ");
    
    system("pause");
}
    
    
    
    
    
    
    
    
    
    
    
    
