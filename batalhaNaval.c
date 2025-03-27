#include <stdio.h>

int main() {
    // Criando o tabuleiro
    int tabuleiro[10][10] = {0};

    // Posicionando navios - horizontal
    for (int j = 1; j <= 4; j++) {
        tabuleiro[2][j] = 3;
    }

    // Posicionando navios - vertical
    for (int i = 5; i <= 8; i++) {
        tabuleiro[i][6] = 3;
    }

    // Navios na diagonal
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;
    
    tabuleiro[6][3] = 3;
    tabuleiro[7][4] = 3;
    tabuleiro[8][5] = 3;
    tabuleiro[9][6] = 3;
    
    // Exibindo o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}