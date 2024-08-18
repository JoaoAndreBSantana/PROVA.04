#include <stdio.h>
#include <string.h>
#include <ctype.h>
//a funcao tolower converte um caractere maiusculo para seu equivalente minusculo
//a função isalpha verifica se um caractere é uma letra alfabética
//a função strcspn(s, reject)Calcula o comprimento do segmento inicial de s que não contém nenhum dos caracteres da string reject
//a função fgets lê uma linha de texto da entrada padrão (ou de um arquivo) e armazena na string

#define TAMANHO_ALFABETO 26
//ATIVIDADE 6 (confesso q procurei auxilio nessa atv... pesquisei em comunidades no Reddit como e quais ferramnetas me ajudariam aq)
int main() {
    
    char chave[TAMANHO_ALFABETO + 1];  // adiciona 1 para o caractere nulo \0
    char texto_claro[100];
    
    // pede ao usuario a chave
    printf("Insira a chave de criptografia (26 letras): ");
    fgets(chave, sizeof(chave), stdin); // e tipo um scanf para string
    chave[strcspn(chave, "\n")] = '\0';  //remove o caractere de nova linha

    // verifica se a chave tem 26 letras 
    if (strlen(chave) != TAMANHO_ALFABETO) { // se chave for diferente de TAMANHO_ALFABETO(26)
        printf("Chave invalida.\n");  
        return 1;  // retorna erro
    }

    
    char substituicao[TAMANHO_ALFABETO];
    for (int i = 0; i < TAMANHO_ALFABETO; i++) {
        substituicao[i] = tolower(chave[i]);  // converte para minusculo
    }

    
    printf("texto claro: ");
    fgets(texto_claro, sizeof(texto_claro), stdin);
    texto_claro[strcspn(texto_claro, "\n")] = '\0';  //remove o caractere de nova linha

    printf("texto cifrado: ");
    for (int i = 0; texto_claro[i] != '\0'; i++) {
        char c = texto_claro[i];
        if (isalpha(c)) {
            //converte o caractere para minusculoo
            printf("%c", substituicao[tolower(c) - 'a']);  // substituicao correta
        } else {
            printf("%c", c);  // imprime caracteres nao alfabeticos sem alteraçao
        }
    }

    return 0;
}
