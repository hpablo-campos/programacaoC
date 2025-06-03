#include <stdio.h>

int main (){

    // Declaração de variáveis
    int opcao;
    float nota1, nota2, media;

    // Interface do usuário
    printf("** Gerenciador de Média **\n\n");
    printf("Selecione uma opção:\n");
    printf("1. Calcular média\n");
    printf("2. Determinar situação do aluno\n");
    printf("3. Sair\n");

    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao){

    case 1:
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        if ((nota1 >0 && nota1 <=10) && (nota2 >0 && nota2 <=10)){
            printf("Notas válidas.\n");
            media = (nota1 + nota2) / 2;
            printf("A média é: %.2f\n", media);
        
        } else {
            printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
            return 1; // Encerra o programa se as notas forem inválidas
        }
    break;

        
    
    case 2:
        printf("Digite a média do aluno: ");
        scanf("%f", &media);

        if (media >= 7.0) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    break;

    default:
        break;
    }
    return 0;
}