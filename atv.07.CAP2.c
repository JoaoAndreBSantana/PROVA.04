#include <stdio.h>
int main(){
	/*7. Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00. Fa�a um
programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou uma mensagem, caso
ele n�o tenha direito ao aumento.*/
	
	float salarioAtual,salarioNovo;
	
	printf("insira seu salario:");
	scanf("%f",&salarioAtual);
	
	if(salarioAtual<500){
		salarioNovo= salarioAtual + (salarioAtual*0.3);
		printf("SEU NOVO SALARIO: %2.f", salarioNovo);
	}else{
		printf("NAO TEM AUMENTO SALARIAL.");
	}
	
	
	return 0;
	system("pause");
}
