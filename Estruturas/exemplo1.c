//criar uma estrttura chamada bola com dois campos. cor da bola e o raio dela.
//declarar duas variaveis do tipo bola,ler os dados de cada bola e imprimir no video a cor da maior bola

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    struct bola{
        char cor[50];
        float raio;

    };

    struct bola a , b;
    printf("Digite a cor da primeira bola: ");
    gets(a.cor);
    printf("Digite o raio da primeira bola: ");
    scanf("%f",&a.raio);
    fflush(stdin);
    printf("Digite a cor da segunda bola: ");
    gets(b.cor);
    printf("Digite o raio da segunda bola: ");
    scanf("%f",&b.raio);
    printf("\n");
    if(a.raio > b.raio)
        puts(a.cor);
    else
        puts(b.cor);

}
