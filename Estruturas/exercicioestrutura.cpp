#include<stdlib.h>
#include<stdio.h>

typedef struct {
        char nome[50];
        float nota;
        }aluno;
        
void lerDados( aluno *a );
void imprimirDados( aluno *a);
int main ()
{
  aluno a[3];
  lerDados(a);
  imprimirDados(a);
  system("pause");  
}

void lerDados( aluno *a )
{
 int k;
 for(k = 0; k < 3;k++)
 {
  fflush(stdin);
  printf("Digite o nome do aluno: " );
  scanf("%s",&a[k].nome);
  printf("Digite a nota do aluno: ");
  scanf("%f",&a[k].nota);   
 }     
}

void imprimirDados( aluno *a)
{
 int k;
 for(k = 0;k < 3;k++)
 {
  printf("Nome: %s ; Nota: %.2f\t",a[k].nome,a[k].nota);
 }     
}
