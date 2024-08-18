#include <stdio.h>
int main(){
	//ATIVIDADE 1
	int x, soma=0;
	
	printf("digite o tamanho do array:\n");
	scanf("%d",&x); //lendo a entrda do usuario q no caso é o tamanho do array
	
	int array[x]; 
	
	printf("Agora digite %d numeros inteiros do array:\n",x);
		for(int i=0;i<x;i++){ //percorre o tamanho do array
			scanf("%d", &array[i]);
			soma+= array[i];//adiciona o array a soma total
		}
	printf("SOMA DOS ELEMENTOS DO ARRAY E:%d\n", soma);//imprime a soma dos elementos
	
	return 0;
	
}
