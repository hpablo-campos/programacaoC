#include <stdio.h>

int main (){

    //Conhecendo os operadores matemáticos em C.


    //Declaração de variáveis

    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;


    //Recebe dois números do usuário
    printf("Entre com o primeiro número:\n");
    scanf("%d", &numero1);

    printf("Entre com o segundo número:\n");
    scanf("%d", &numero2);


    //Operação de soma
    soma = numero1 + numero2;

    //Operação de subtração
    subtracao = numero1 - numero2;

    //Operação de multiplicação
    multiplicacao = numero1 * numero2;

    //Operação de divisão
    divisao = (float)numero1 / numero2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %.2f\n", divisao);


    return 0;
}