#include <stdio.h>

int main(){

    // Declaração de variáveis
    char Estado1, Estado2;
    char CodigoCarta1[4], CodigoCarta2[4];
    char NomeCidade1[20], NomeCidade2[20];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int nPontosTuristicos1, nPontosTuristicos2;

    // Solicita os dados ao usuário para a primeira carta
    printf("Digite o primeiro estado: \n");
    scanf("%c", &Estado1);
    printf("Digite o código da primeira carta: \n");
    scanf("%s", CodigoCarta1);
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", NomeCidade1);
    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &Populacao1);
    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &Area1);
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &nPontosTuristicos1);

    // Solicita os dados ao usuário para a segunda carta
    printf("Digite o segundo estado: \n");
    scanf(" %c", &Estado2); 
    printf("Digite o código da segunda carta: \n");
    scanf("%s", CodigoCarta2);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", NomeCidade2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &Populacao2);
    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &Area2);
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &nPontosTuristicos2);

    // Exibe os dados da primeira carta
    printf("Carta 1:\nEstado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.1f\nPIB: %.2f\nNúmero de pontos turísticos: %d\n", Estado1, CodigoCarta1, NomeCidade1, Populacao1, Area1, PIB1, nPontosTuristicos1);

    // Exibe os dados da segunda carta
    printf("Carta 2:\nEstado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.1f\nPIB: %.2f\nNúmero de pontos turísticos: %d\n", Estado2, CodigoCarta2, NomeCidade2, Populacao2, Area2, PIB2, nPontosTuristicos2);
    return 0;


}