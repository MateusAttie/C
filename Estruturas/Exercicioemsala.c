#include<stdio.h>
#include<stdlib.h>


typedef struct aluno{
    char nome[50];
    float nota1;
    float nota2;
    }aluno;
int main()
{
 aluno a[3];
 int k;
 float media;
for(k = 0;k < 3;k++)
{
fflush(stdin);
printf("Digite o seu nome: ");
gets(a[k].nome);
fflush(stdin);
printf("Digite as notas 1 e 2: ");
scanf("%f %f",&a[k].nota1,&a[k].nota2);

}
for(k = 0;k < 3;k++)
{
    media = (a[k].nota1+a[k].nota2)/2;
    printf("%s\n",a[k].nome);
    printf("%.2f\n",media);
}
}
