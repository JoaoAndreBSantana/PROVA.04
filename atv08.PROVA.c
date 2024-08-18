#include <stdio.h>
#include <math.h>// biblioteca para usar as funcao sqrt(encontra a raiz quadrada de um numero)
//ATIVIDADE 8 
int main() {
    int A, B, C;
    int ladoTER = 0;
    
    printf("insira os valores de A, B e C:\n");

    if (scanf("%d %d %d", &A, &B, &C) != 3) { //se for diferente de 3 ele n funciona
        printf("entrada com erro.\n");
        return 1; // 1 retorna erro 
    }

    if (A == 0 && B == 0 && C == 0) { //se caso for inserido so zeros
        printf("Insira valores corretamente");
        return 0; // aq n tem necessidade de ser erro e retorna 0 
    }

     int areaCASA = A * B;

    
    double areaT = (double)areaCASA * 100 / C; // eu converto areaCASA pra double usando o (double) antes dele 

    ladoTER =(int)(sqrt(areaT));// sqrt calcula a raiz quadrada da area do terreno e retorna double... o int coverte para inteiro 
    

    printf("o lado minimo do terreno e:%d\n", ladoTER);
 return 0;
}
