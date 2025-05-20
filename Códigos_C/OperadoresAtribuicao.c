#include <stdio.h>

int main (){

    /* 
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
    */


    //Declaração de variáveis
    int numero1=10, numero2=2, resultado;

    resultado = 10;
    printf("O resultado é: %d\n", resultado);

    resultado += 20;
    printf("O resultado é: %d\n", resultado);

    resultado -= numero1;
    printf("O resultado é: %d\n", resultado);

    resultado *= 5;
    printf("O resultado é: %d\n", resultado);

    resultado /= 2;
    printf("O resultado é: %d\n", resultado);

    //Operação de soma
    resultado = numero1 + numero2;
    printf("O resultado é: %d\n", resultado);

    //Operação de subtração
    resultado = numero1 - numero2;
    printf("O resultado é: %d\n", resultado);

    //Operação de multiplicação
    resultado = numero1 * numero2;
    printf("O resultado é: %d\n", resultado);

    //Operação de divisão
    resultado = numero1 / numero2;
    printf("O resultado é: %d\n", resultado);

    //Operação de resto
    resultado = numero1 % numero2;
    printf("O resultado é: %d\n", resultado);



    return 0;
}