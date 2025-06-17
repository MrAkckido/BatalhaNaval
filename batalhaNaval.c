#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10];

    // Preenchendo o tabuleiro com zeros
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando navio vertical
    for(int i = 0; i < 3; i++) {
        tabuleiro[i][2] = 3;
    }

    // Posicionando navio horizontal
    for(int j = 4; j <= 6; j++) {
        tabuleiro[5][j] = 3;
    }

    // Imprimindo coluna com letras de A a J
    printf("   ");
    for(char coluna = 'A'; coluna <= 'J'; coluna++) {
        printf("%c ", coluna);
    }
    printf("\n");

    // Imprimindo tabuleiro com números de 1 a 10 nas linhas
    for(int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
