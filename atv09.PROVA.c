#include <stdio.h>
#include <string.h> // biblioteca q manipula strings.
// o strcmp e usado para comparar as strings 

int main() {
    int N; //N guarda o numero de testes 
    char opcoes[5][20] = {"pedra", "papel", "tesoura", "lagarto", "spock"};

    
    printf("Insira a quantidade de testes:\n");
    scanf("%d", &N);
    getchar(); // limpa o buffer do teclado

    //loop para percorrer os testes N
    for (int i = 1; i <= N; i++) {
        char escolhaS[20]; 
        char escolhaR[20];    

        printf("escolha de Sheldon e Raj:\n");
        scanf("%s %s", escolhaS, escolhaR);// string n usa & 

        // para ver se as escolhas sao iguais
        if (strcmp(escolhaS, escolhaR) == 0) {
            printf("Caso #%d: De novo!\n", i); // se for 0 imprime "de novo!""
            continue; //volta para o inicio do loop 
        }

        // variavel para guardar o vencedor 
        int sheldon_venceu = 0;
        int raj_venceu = 0;

        if (strcmp(escolhaS, "pedra") == 0) {
            if (strcmp(escolhaR, "tesoura") == 0 || strcmp(escolhaR, "lagarto") == 0) {
                sheldon_venceu = 1; 
            } else if (strcmp(escolhaR, "papel") == 0 || strcmp(escolhaR, "spock") == 0) {
                raj_venceu = 1; 
            }
        } else if (strcmp(escolhaS, "papel") == 0) {
            if (strcmp(escolhaR, "pedra") == 0 || strcmp(escolhaR, "spock") == 0) {
                sheldon_venceu = 1; 
            } else if (strcmp(escolhaR, "tesoura") == 0 || strcmp(escolhaR, "lagarto") == 0) {
                raj_venceu = 1; 
            }
        } else if (strcmp(escolhaS, "tesoura") == 0) {
            if (strcmp(escolhaR, "papel") == 0 || strcmp(escolhaR, "lagarto") == 0) {
                sheldon_venceu = 1; 
            } else if (strcmp(escolhaR, "pedra") == 0 || strcmp(escolhaR, "spock") == 0) {
                raj_venceu = 1; 
            }
        } else if (strcmp(escolhaS, "lagarto") == 0) {
            if (strcmp(escolhaR, "papel") == 0 || strcmp(escolhaR, "spock") == 0) {
                sheldon_venceu = 1; 
            } else if (strcmp(escolhaR, "pedra") == 0 || strcmp(escolhaR, "tesoura") == 0) {
                raj_venceu = 1; 
            }
        } else if (strcmp(escolhaS, "spock") == 0) {
            if (strcmp(escolhaR, "pedra") == 0 || strcmp(escolhaR, "tesoura") == 0) {
                sheldon_venceu = 1; 
            } else if (strcmp(escolhaR, "papel") == 0 || strcmp(escolhaR, "lagarto") == 0) {
                raj_venceu = 1; 
            }
        }

        // Imprime o resultado baseado em quem venceu
        if (sheldon_venceu) {
            printf("Caso #%d: Bazinga!\n", i); // sheldon venceu
        } else if (raj_venceu) {
            printf("Caso #%d: Raj trapaceou!\n", i); // raj venceu
        }
    }
//comparar string é meio complicado... por isso foi importante usar a funçao strcmp
    return 0; 
}
