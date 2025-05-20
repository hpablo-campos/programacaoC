#include <stdio.h>

int main (){

    // Declaração de variáveis
    float nota1, nota2, nota3;
    float media;

    // Apresentação do programa
    printf("*** Cálculo da média de três notas ***\n\n");

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibição do resultado
    if (media >= 6){
        printf("Aprovado com média: %.1f\n", media);
    } 
         else {
        printf("Reprovado com média: %.1f\n", media);
    }

    // Fim do programa
    return  0;
}