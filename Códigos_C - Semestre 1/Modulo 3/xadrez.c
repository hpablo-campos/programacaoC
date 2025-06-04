#include <stdio.h>

int main (){

    // declaração de variáveis de controle
    int t = 1, b = 1;
    int movimentoCompleto = 1;

    // Movimentação da Torre: 5x para cima (utilizando while)
    printf ("MOVIMENTAÇÃO DA TORRE\n\n");
    while (t<=5)
    {   
        
        printf ("CIMA\n");
        t++;
    }


    // Movimentação do Bispo: 4x para cima direita (utilizando do-while)
    printf ("\nMOVIMENTAÇÃO DO BISPO\n\n");
    do {
        
        printf ("CIMA DIREITA\n");
        b++;
    } while (b<=4);


    // Movimentação da Rainha: 8x direita (utilizando for)
    printf ("\nMOVIMENTAÇÃO DA RAINHA\n\n");
    for (int r = 1; r <= 8; r++){
        printf ("DIREITA\n");
    }
    
    // Movimentação do Cavalo: 2x para cima, 1x para direita (utilizando while e for)
    printf ("MOVIMENTAÇÃO DO CAVALO\n\n");
    while (movimentoCompleto--){
        
        for (int i = 0; i < 2; i++){
            printf ("CIMA\n");
        }

        printf("DIREITA\n");
    }
    

    
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}