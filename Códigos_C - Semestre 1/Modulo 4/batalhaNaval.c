#include <stdio.h>

int main() {
    
    int tabuleiro[10][10] = {0};

    int tamanho_navio = 3;

    // Navio 1 (Horizontal)
    int navioH_linha = 0;
    int navioH_coluna = 0;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navioH_linha][navioH_coluna + i] = 3;
    }

    // Navio 2 (Vertical)
    int navioV_linha = 2;
    int navioV_coluna = 5;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navioV_linha + i][navioV_coluna] = 3;
    }

    // Navio 3 (Diagonal \)
    int navioD1_linha = 6;
    int navioD1_coluna = 0;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navioD1_linha + i][navioD1_coluna + i] = 3;
    }

    // Navio 4 (Diagonal /)
    int navioD2_linha = 2;
    int navioD2_coluna = 9;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navioD2_linha + i][navioD2_coluna - i] = 3;
    }
    
    printf("\n=== TABULEIRO DE BATALHA NAVAL ===\n\n");

    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}