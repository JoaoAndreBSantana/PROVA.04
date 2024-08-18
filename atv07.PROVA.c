#include <stdio.h>  

// ATIVIDADE 7
int main() {
    int chave; // variável da chave

    printf("Digite a chave que seja numero positivo: ");
    if (scanf("%d", &chave) != 1 || chave <= 0) {  // verifica se a chave é um número positivo
        printf("A chave deve ser um número positivo.\n");  // deu erro
        return 1;  // retorna 1 de erro
    }

    // limpa o buffer apos a leitura da chave
    getchar();  // remove o caractere de nova linha

    // Solicita o texto 
    char caractere;  // variável para armazenar cada caractere do texto
    printf("Digite o texto a ser criptografado:\n");



    // Lê e criptografa o texto caractere por caractere
    while ((caractere = getchar()) != '\n') {  // Continua ate encontrar um caractere de nova linha// esta parte fiz com auxilio de comunidades no reddit
        if (caractere >= 'A' && caractere <= 'Z') {  // letra maiúscula
            printf("%c", (caractere - 'A' + chave) % 26 + 'A');
        } else if (caractere >= 'a' && caractere <= 'z') {  // minuscula
            printf("%c", (caractere - 'a' + chave) % 26 + 'a');
        } else {
            printf("%c", caractere); // esta parte foi puxada do reddit... eu simplesmente n tava conseguindo resolver
        }
    }

    return 0;  
}
