#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicita os dados ao usuário
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o resultado
    printf("Seu IMC é: %.2f\n", imc);

    // Classificação básica
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Classificação: Peso normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Obesidade\n");
    }

    return 0;
}
