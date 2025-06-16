#include <stdio.h>

int main() {
    
    int tabuleiro[10][10] = {0};

    int tamanho_navio = 3;

    int navioH_linha = 2;
    int navioH_coluna = 2;

    int navioV_linha = 5;
    int navioV_coluna = 6;

    
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navioH_linha][navioH_coluna + i] = 3;
    }

    
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navioV_linha + i][navioV_coluna] = 3;
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