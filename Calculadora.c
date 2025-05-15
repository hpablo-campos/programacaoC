#include <stdio.h>

int main() {
    
    int num1, num2, resultado;
    char operador;
    // Solicita os dados ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");        
    scanf("%d", &num2);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    // Realiza a operação com base no operador fornecido

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %d\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %d\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %d\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %d\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operador inválido.\n");
    }
    return 0;
}