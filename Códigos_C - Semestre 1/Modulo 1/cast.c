#include <stdio.h>

int main(){

    // Declaração de variáveis
    int num1 = 10, num2 = 3;
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    float divisao = (float)num1 / num2;

    // Exibição dos resultados
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0; // Fim do programa
}