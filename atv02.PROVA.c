#include <stdio.h>
/*Prot�tipo da fun��o:
void multiplica_matrizes(int n, int matriz1[n][n], int matriz2[n][n], int resultado[n][n]);*/
//ATIVIDADE 2
//tive q usar seguir a l�gica q a atv forneceu


// lendo os elementos da primeira matriz MAT1
void MAT1(int matriz1[][100], int x){ // matriz1[][100] tem este tamanho de elementos pq achei q � o necess�rio eu acredito
    int i, j; //variavel de controle 
    printf("digite os elementos da matriz1:\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){ 
            scanf("%d", &matriz1[i][j]); //l� e preenche a matriz1 
        }
    }
}

// agora a matriz2 esta sendo lida igual a matriz1
void MAT2(int matriz2[][100], int x){// � a mesma coisa da primeira praticamente 
    int i, j;
    printf("digite os elementos da matriz2:\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            scanf("%d", &matriz2[i][j]); 
        }
    }
}

// fun��o para multiplicar(fornecida pela atv)
void multiplica_matrizes(int x, int matriz1[][100], int matriz2[][100], int resultado[][100]){
   int i, j, k;
   for(i = 0; i < x; i++){//lembrando q int x s� vai ser lido dentro do main()
        for(j = 0; j < x; j++){
            resultado[i][j] = 0; // zera a matriz 
        }
    } //calcula a multiplica��o das matrizes
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            for(k = 0; k < x; k++){
                resultado[i][j] += matriz1[i][k]*matriz2[k][j]; // calcula a matriz de resultado 
                //aqui tive um pouco de dificuldade com a l�gica... mas funcionou depois
            }
        }
    }
   
   // imprime a matriz resultado 
    printf("resultado da multiplicacao e:\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            printf("%d ", resultado[i][j]); 
        }
    }
}

int main(){
    int x;
    printf("Insira o tamanho das matrizes:\n");
    scanf("%d", &x);//lendo a var x 

    // declara�ao das matrizes 
    int matriz1[100][100], matriz2[100][100], resultado[100][100];

    // l� as matrizes do usuario
    MAT1(matriz1, x);
    MAT2(matriz2, x);
    multiplica_matrizes(x, matriz1, matriz2, resultado);

    return 0;
}
