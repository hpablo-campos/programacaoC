#include <stdio.h>

int main (){
    /*
    Incremento (++)
    Pré-incremento (++variavel)
    Pós-incremento (variavel++)
    Decremento (--)
    Pré-decremento (--variavel)
    Pós-decremento (variavel--)
    */

    int numero = 1, resultado;

    printf("Número inicial: %d\n", numero);

    resultado = numero++; // Pós-incremento   
    printf("Número após pós-incremento: %d - Resultado: %d\n", numero, resultado);

    resultado = ++numero; // Pré-incremento
    printf("Número após pós-incremento: %d - Resultado: %d\n", numero, resultado);

    resultado = numero--; // Pós-decremento
    printf("Número após pós-decremento: %d - Resultado: %d\n", numero, resultado);

    resultado = --numero; // Pré-decremento
    printf("Número após pré-decremento: %d - Resultado: %d\n", numero, resultado);


    return 0;
}

    