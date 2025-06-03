#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int opcao;
    int numeroSecreto, palpite;

    printf("MENU PRINCIPAL\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");

    scanf("%d", &opcao);
    printf("\n");

    switch (opcao)  // Note: opcao should be initialized with a value before this switch
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10 + 1; // Gera um número aleatório entre 1 e 10
        printf("Digite um número entre 1 e 10\n");
        scanf("%d", &palpite);
        if (palpite == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto!\n");
        } else {
            printf("Você errou! O número secreto era %d\n", numeroSecreto);
        }
        break;
    case 2:
        printf("Regras do jogo:\n");
        printf("1. O computador escolherá um número secreto entre 1 e 10.\n");
        printf("2. Você deve tentar adivinhar o número secreto.\n");
        printf("3. Se você acertar, ganhará o jogo; caso contrário, perderá.\n");
        break;
    
    case 3:
        printf("Saindo do jogo. Até a próxima!\n");
        exit(0); // Encerra o programa
        break;
    default:
        break;
    }
}