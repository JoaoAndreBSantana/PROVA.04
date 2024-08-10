#include <stdio.h>
int main(){
	/*faça um programa que receba um numero inteiro e verifique se e par ou impar.*/
	
	int num;
	printf("insira um numero inteiro:\n");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("e um numero par.\n");
	}else{
		printf("e um numero impar\n");
	}
	
	
	
	system("pause");
	return 0;
}
