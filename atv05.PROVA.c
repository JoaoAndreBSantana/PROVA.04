#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_BUF 100//o nome ja diz tudo
//ATIVIDADE 5 
/*O CODIGO FORNECIDO PELA ATV PEDE APENAS PARA IMPRIMIR. NO MEU COMPILADOR N TEM A BIBLIOTECA
cs50 E TIVE Q MODIFICAR PARA COMPILAR NO MEU DEV C++ SEM A UTILIZAÇÃO DE cs50 */

//pontos A=1,B=3 e vai indo
int PONTOS[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

//funcao para calcular a pontuação de uma palavra
int computeP(char* palavra) { //ponteiro que da uma segurança melhor 
    int pont = 0;  
    int TAM = strlen(palavra);  // tamanho da palavra(strlen calcula o tamanho da string)

    
    for (int i = 0; i < TAM; i++) {
        char c = palavra[i];  // encontra o caractere atual

        if (isupper(c)) {
            // Se o caractere e maiusculo, ajusta assim A=0
            pont += PONTOS[c - 'A'];
        } else if (islower(c)) {// caso o caracter for minusculo a=0
            pont += PONTOS[c - 'a'];
        }
    }
    return pont;  //retorna o total da pontuacao
}

int main() {
    char palavra1[TAMANHO_BUF];
    char palavra2[TAMANHO_BUF];

    printf("Jogador 1: ");
    scanf("%s", palavra1);

    printf("Jogador 2: ");
    scanf("%s", palavra2);//lembrando que n se usa &

    // Calcula a pontuacao  de cada palavra
    int pont1 = computeP(palavra1);
    int pont2 = computeP(palavra2);

    // Compara as pontuações e imprime o resultado
    if (pont1 > pont2) {
        printf("jogador 1 vence com %d pontos", pont1);
    } else if (pont2 > pont1) {
        printf("jogador 2 vence com %d pontos\n", pont2);
    } else {
        printf("empate: %d\n", pont1);
    }

    return 0;
}
