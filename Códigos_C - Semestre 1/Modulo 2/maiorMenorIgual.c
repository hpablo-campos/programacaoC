#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){

    // Declaração de variáveis
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand(time(0)); // Inicializa o gerador de números aleatórios
    numeroComputador = rand() % 10 + 1; // Gera um número aleatório entre 1 e 10

    // Inicio do jogo
    printf("Bem vindo ao jogo de comparação de números!\n\n");
    printf("Escolha o tipo de comparação:\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Digite sua escolha (M, N ou I): ");
    scanf(" %c", &tipoComparacao);

    // Solicita o número do jogador
    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);
    // Verifica se o número do jogador está dentro do intervalo permitido
    if (numeroJogador < 1 || numeroJogador > 10) {
        printf("Número inválido! Por favor, escolha um número entre 1 e 10.\n");
        return 1; // Encerra o programa se o número for inválido
    }

    // Exibir numero gerado pelo Computador
    printf("O número gerado pelo computador é: %d\n", numeroComputador);

    switch (tipoComparacao) {
        case 'M': // Maior
        case 'm':
            printf("Você escolheu a opção Maior.\n\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;

        break;

        case 'N': // Menor
        case 'n':
            printf("Você escolheu a opção Menor.\n\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;

        break;

        case 'I': // Igual
        case 'i':
            printf("Você escolheu a opção Igual.\n\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            
        break;

        default:
            printf("Opção inválida! Por favor, escolha M, N ou I.\n");
    }
    // Exibe o resultado da comparação
    printf("Seu número: %d. Número do computador: %d.\n", numeroJogador, numeroComputador);

    if (resultado) {
        printf("Parabéns! Você venceu.\n");
    } else {
        printf("Que pena! Você perdeu.\n");
    }

    return 0;
}