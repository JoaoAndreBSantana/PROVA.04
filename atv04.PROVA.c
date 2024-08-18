#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int valor = 0; //valor em centavos
    int Quant25, Quant10, Quant5, Quant1;  //quantidade de moedas

    //loop para garantir que o valor inserido é um número válido e não negativo
    do {
        printf("insira o valor em centavos: \n");
        if (scanf("%d", &valor) != 1 || valor < 0) {//se o valor lido for diferente de 1 ou menor q zero 
            printf("Entrada invalida. Insira corretamente\n");//ele da em erro
            while (getchar() != '\n'); //limpa o buffer de entrada para ler denovo
        }
    } while (valor < 0);  // Continua pedindo ate chegar um numero invalido ou menor

    // Calcula a quantidade de moedas de 25 centavos
    Quant25 = valor / 25;
    valor = valor % 25;  //atualiza o valor restante após a contagem das moedas de 25 centavos

    
    Quant10 = valor / 10;//valor aq é o restante do valor%25
    valor = valor % 10;  //continua atualizaçao 

    Quant5 = valor / 5;
    valor = valor % 5;   // Atualiza o valor restante após a contagem das moedas de 5 centavos

    
    Quant1 = valor / 1;  // restante do valor é exatamente a quantidade de moedas de 1 centavo

    //imprime a quantidade de moedas de cada tipo
    printf("Quantidade de moedas de 25 centavos: %d\n", Quant25);
    printf("Quantidade de moedas de 10 centavos: %d\n", Quant10);
    printf("Quantidade de moedas de 5 centavos: %d\n", Quant5);
    printf("Quantidade de moedas de 1 centavo: %d\n", Quant1);

    return 0;
}     
