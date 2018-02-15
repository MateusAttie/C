/*---------------------------------------------------------------------*/
/*---------------------------------------------------------------------*/
/*Autor: Mateus Ingegneri Attie----------------------------------------*/
/*Data: 21/03/2016---------------------------------------------------- */
/*Empresa: M&A Park Estacionamentos------------------------------------*/
/*Função: Cálculo de lucro, salario de administração e gerencia--------*/
/*---------------------------------------------------------------------*/
/*---------------------------------------------------------------------*/




#include<stdio.h>
#include<stdlib.h>

int main()
{
	float lucroAtt,plMaior,plMenor;
	float plMaiorPlanilha;
	float truncMaior;
	printf("\t\t\t\t\t\t");
	printf("******************************************************");
	printf("\n");
	printf("\t\t\t\t\t\t");
    printf("*PROGRAMA DE CALCULOS MENSAIS M&A PARK ESTACIONAMENTOS*");
    printf("\n");
    printf("\t\t\t\t\t\t");
    printf("*******************************************************");
    printf("\n");
	
	printf("Informe o valo do Lucro atualizado(Real): R$");
	scanf("%f",&lucroAtt);
	printf("\n");
	
	plMaior = lucroAtt * 0.45;
	plMenor = lucroAtt * 0.05;
	
	printf("PL de 45%% = R$%.2f ",plMaior);
	printf("\n");
	printf("PL de 5%% = R$%.2f ",plMenor);
	printf("\n");
	
	printf("Informe o valor que deseja usar como 45%%: R$");
	scanf("%f",&plMaiorPlanilha);
	printf("\n");
	
	plMenor = (plMaiorPlanilha * 5)/45;
	
	printf("De acordo com o PL 45%%, o PL 5%% e igual a: R$%.2f",plMenor);
	
	printf("\n");
	printf("\n");
	
	system("pause");
	
	return 0;
	
}
