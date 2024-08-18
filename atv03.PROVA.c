#include <stdio.h>
#include <ctype.h>
#include <string.h>
//ATIVIDADE 3

int main() {
    char num[20];  
    char num2[20];   //array para armazenar apenas os digitos numericos
    int tam, digito, i, j = 0; 
    int soma = 0;    

    
    printf("insira os numeros do cartao:\n");
    scanf("%19s", num);  // 19 serve para limitar o tamanho para evitar problemas

    //isdigit serve para verificar se um caractere é um digito
    for (i = 0; num[i] != '\0'; i++) {//enquanto for diferente de \0 significa que é menor q 20
        if (isdigit(num[i])) {//se for um digito...
            num2[j++] = num[i]; //copia os digitos para num2
        }
    }
    num2[j] = '\0';  //adiciona o caractere nulo ao final da string num2(peguei no reddit essa info)

    tam = strlen(num2);  //calcula o comprimento da string num2

    int multi = 0;  //var para alternar a multiplicaçao dos digitos

    //processa os digitos de trás pra frente
    for (i = tam - 1; i >= 0; i--) {
        digito = num2[i] - '0';//converte o caractere para um digito inteiro

        // Se multi é verdadeiro (1), duplica o dígito /*essa parte eu tive q pesquisar em alguns sites...  eu n estva conseguindo fazer*/
        if (multi) {
            digito *= 2;
            if (digito > 9) {
                digito -= 9;  
            }
        }

        soma += digito;  //adiciona o digito para a soma
        multi = !multi;  //alterna o valor de multi
    }

    // Verifica se a soma é um múltiplo de 10
    if (soma % 10 != 0) {
        printf("invalid\n");  // Se não for múltiplo de 10, imprime "invalid"
        return 0;  // Finaliza o programa
    }

    // compara os tips do cartao com base no comprimento e nos primeiros digitos
    if (tam == 15 && (num2[0] == '3' && (num2[1] == '4' || num2[1] == '7'))) {
        printf("amex\n"); 
    } else if (tam == 16 && (num2[0] == '5' && num2[1] >= '1' && num2[1] <= '5')) {
        printf("mastercard\n"); 
    } else if ((tam == 13 || tam == 16) && num2[0] == '4') {
        printf("visa");  
    } else {
        printf("invalid\n");  
    }

    return 0; 
}
