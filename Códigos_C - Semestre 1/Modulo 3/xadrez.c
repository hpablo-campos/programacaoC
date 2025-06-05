#include <stdio.h>

// Método para movimentação da Torre

void moverTorre (int casas){
    if (casas > 0){
        printf ("Direita\n\n");
        moverTorre (casas - 1);
    }
}

void moverBispo (int casas){
    for (int vertical = casas; casas > 0; casas--){
        printf ("Cima\n");
        for (int horizontal = vertical; vertical > 0; vertical --){
            printf ("Direita\n\n");
            break;
        }
    }
}

void moverRainha (int casas){
    if (casas > 0){
        printf ("Esquerda\n\n");
        moverRainha (casas -1);
    }
}

void moverCavalo (){
    for (int cima = 0; cima < 2; cima++){
        printf ("Cima\n\n");
        
        for (int direita = 1; direita == 1; direita--){
            printf ("Direita\n\n");
            break;
        }
    }
}


int main (){

    printf ("** MOVIMENTAÇÃO DA TORRE **\n\n");
    moverTorre(5); // torre anda 5 casas.

    printf ("\n** MOVIMENTAÇÃO DO BISPO **\n\n");
    moverBispo (5); // bispo anda 5 casas.

    printf ("\n** MOVIMENTAÇÃO DA RAINHA **\n\n");
    moverRainha (8); // rainha anda 8 casas.

    printf ("\n** MOVIMENTAÇÃO DO CAVALO **\n\n");
    moverCavalo ();

    return 0;
}