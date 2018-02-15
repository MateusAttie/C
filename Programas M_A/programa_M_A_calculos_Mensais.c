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

float calculaGerencia(float lucro);
float calculaAdm(float lucro);
float calculaGerenciaLiquido(float salGerBruto,float valeGer);
float calculaAdmLiquido(float salAdmBruto,float valeAdm);
float atualizaLucro(float lucro,float salGerBruto, float salAdmBruto);

int main()
{
    float 	receita,despesa,lucro,lucroAtt;//variaveis p/calculo de lucro
    float 	salGerBruto,salAdmBruto,salAdmLiquido,salGerLiquido;//variaveis p/ calculo de salario
	float 	valeAdm,valeGer;//variaveis p/ armazenar vales(Salario Liquido)
	
	//calculo lucro
	printf("\t\t\t\t\t\t");
	printf("******************************************************");
	printf("\n");
	printf("\t\t\t\t\t\t");
    printf("*PROGRAMA DE CALCULOS MENSAIS M&A PARK ESTACIONAMENTOS*");
    printf("\n");
    printf("\t\t\t\t\t\t");
    printf("*******************************************************");
    printf("\n");
    
    printf("Por favor, digite o valor da Receita: R$ ");
    scanf("%f",&receita);
    printf("Digite o valor da despesa: R$ ");
    scanf("%f",&despesa);
    lucro = receita - despesa;
    printf("Lucro: R$%.2f",lucro);
    printf("\n");
    printf("\n");
    
    //calculo salario Gerencia
    printf("Calculando Gerencia .....");
    printf("\n");
    salGerBruto = calculaGerencia(lucro);
    
    //minimo salario gerencia R$3000,00
    if(salGerBruto < 3000)
    {
    	printf("Salario Gerencia Bruto = R$%.2f",salGerBruto);
    	salGerBruto = 3000;
    	printf("\n");
    	printf("Minimo Gerencia = R$%.2f",salGerBruto);
	}
	printf("\n");
	
    printf("Para o calculo da Gerencia informe o valor dos vales: ");
    scanf("%f",&valeGer);
    
    if(valeGer != 0)//verificação da existencia de vales
    {
    	printf("Salario Bruto Gerencia: R$%.2f",salGerBruto);
    	salGerLiquido = calculaGerenciaLiquido(salGerBruto,valeGer);
    	printf("\n");
		printf("Salario Liquido Gerencia: R$%.2f",salGerLiquido);
	}
	else{
		printf("Salario Gerencia: R$%.2f",salGerBruto);
		}
		
    printf("\n");
    printf("\n");
    printf("\n");
    
    //calculo saalrio ADM
    printf("Calculando ADM ........");
    printf("\n");
    salAdmBruto = calculaAdm(lucro);
    
    //minimo Salario adm = R$1100,00
    if(salAdmBruto < 1100)
    {
    	printf("Salario ADM Bruto = R$%.2f",salAdmBruto);
    	salAdmBruto = 1100;
    	printf("\n");
    	printf("Minimo ADM = R$%.2f",salAdmBruto);
	}
	printf("\n");
	
    printf("Para o calculo da Administracao informe o valor dos vales: ");
    scanf("%f",&valeAdm);
    
    if(valeAdm != 0)//verificação da existencia de vales
    {
    	printf("Salario Bruto ADM: R$%.2f",salAdmBruto);
    	salAdmLiquido = calculaAdmLiquido(salAdmBruto,valeAdm);
    	printf("\n");
    	printf("Salario Liquido ADM: R$%.2f",salAdmLiquido);
	}
	else{
    	printf("Salario ADM: R$%.2f",salAdmBruto);
		}
	
	printf("\n");
	lucroAtt = atualizaLucro(lucro,salGerBruto,salAdmBruto);
	printf("Lucro Real Atualizado: R$%.2f",lucroAtt);		
	
	printf("\n");
	printf("\n");	


system("pause");

return 0;
}

//FUNÇÕES

//calcula gerencia bruto
float calculaGerencia(float lucro){
    float salarioGer;
    salarioGer = lucro * 0.2;
    return salarioGer;
}

//calcula adm bruto
float calculaAdm(float lucro){
    float salarioAdm;
    salarioAdm = lucro * 0.06;
    return salarioAdm;
}

//calcula derencia liquido
float calculaGerenciaLiquido(float salGerBruto,float valeGer){
    float salarioGer;
    salarioGer = salGerBruto- valeGer;
    return salarioGer;
}

//calcula adm liquido
float calculaAdmLiquido(float salAdmBruto,float valeAdm){
    float salarioAdm;
    salarioAdm = salAdmBruto - valeAdm;
    return salarioAdm;
}

//atualiza lucro após salarios entrarem na despesa
float atualizaLucro(float lucro,float salGerBruto, float salAdmBruto)
{
	float lucroAtt;
	lucroAtt = lucro - (salGerBruto + salAdmBruto);	
	return lucroAtt;
}
