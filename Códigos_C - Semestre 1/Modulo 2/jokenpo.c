#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main (){

    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    // Exibe o menu de opções
    printf("JOGO DE JOKENPÔ\n");
    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite sua escolha (1, 2 ou 3): ");

    // Lê a escolha do jogador
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) 
    {
    case 1: // Jogador escolheu Pedra
        printf("Você escolheu Pedra.\n");
        break;
    
    case 2: // Jogador escolheu Papel
        printf("Você escolheu Papel.\n");
        break;

    case 3: // Jogador escolheu Tesoura
        printf("Você escolheu Tesoura.\n");
        break;

    
    default:
        printf("Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
        return 0; // Encerra o programa se a opção for inválida
    }

     // Gera a escolha do computador (1, 2 ou 3)
    escolhaComputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3

    switch (escolhaComputador) 
    {
    case 1: // Jogador escolheu Pedra
        printf("O Computador escolheu Pedra.\n");
        break;
    
    case 2: // Jogador escolheu Papel
        printf("O Computador escolheu Papel.\n");
        break;

    case 3: // Jogador escolheu Tesoura
        printf("O Computador escolheu Tesoura.\n");
        break;
    }

    if (escolhaJogador == escolhaComputador) {
        printf("Empate! Ambos escolheram a mesma opção.\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) || // Pedra vence Tesoura
               (escolhaJogador == 2 && escolhaComputador == 1) || // Papel vence Pedra
               (escolhaJogador == 3 && escolhaComputador == 2)) { // Tesoura vence Papel
        printf("Você venceu!\n");
    } else {
        printf("O Computador venceu!\n");
    

    }
















    return 0;    
}