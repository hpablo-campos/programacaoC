#include <stdio.h>

int main (){

    // Declaração de variáveis
    int idade, matricula;
    float altura;
    char nome[50];

    // Solicita os dados ao usuário
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    // Exibe os dados informados
    printf("Nome do aluno: %s - Matrícula: %d\nIdade: %d - Altura: %.2f \n", nome , matricula, idade, altura);

    return  0;
}