#include <stdio.h>
int main(){
	/*7. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/
	
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
