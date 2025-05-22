#include <stdio.h>

int main(){

    // Declaração de variáveis
    char Estado1, Estado2;
    char CodigoCarta1[4], CodigoCarta2[4];
    char NomeCidade1[20], NomeCidade2[20];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int nPontosTuristicos1, nPontosTuristicos2;
    float densidadePopulacao1, densidadePopulacao2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Solicita os dados ao usuário para a primeira carta
    printf("Digite o primeiro estado: \n");
    scanf(" %c", &Estado1);
    printf("Digite o código da primeira carta: \n");
    scanf("%s", &CodigoCarta1);
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", &NomeCidade1);
    printf("Digite a população da primeira cidade: \n");
    scanf("%lu", &Populacao1);
    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &Area1);
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da primeira cidade: \n");
    scanf("%d", &nPontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidadePopulacao1 = (float)Populacao1 / Area1;
    pibPerCapita1 = (PIB1 * 1e9f) / (float)Populacao1;

    // Solicita os dados ao usuário para a segunda carta
    printf("Digite o segundo estado: \n");
    scanf(" %c", &Estado2); 
    printf("Digite o código da segunda carta: \n");
    scanf("%s", &CodigoCarta2);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", &NomeCidade2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%lu", &Populacao2);
    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &Area2);
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da segunda cidade: \n");
    scanf("%d", &nPontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidadePopulacao2 = (float)Populacao2 / Area2;
    pibPerCapita2 = (PIB2 * 1e9f) / (float)Populacao2;

    // Exibe os dados da primeira carta
    printf("** Carta 1 **\nEstado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.1f\nPIB: %.2f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %.2f habitantes/KM²\nPIB per Capita: %.2f Reais.\n\n", Estado1, CodigoCarta1, NomeCidade1, Populacao1, Area1, PIB1, nPontosTuristicos1, densidadePopulacao1, pibPerCapita1);

    // Exibe os dados da segunda carta
    printf("** Carta 2 **\nEstado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.1f\nPIB: %.2f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %.2f habitantes/KM²\nPIB per Capita: %.2f Reais.\n\n", Estado2, CodigoCarta2, NomeCidade2, Populacao2, Area2, PIB2, nPontosTuristicos2, densidadePopulacao2, pibPerCapita2);

    // Cálculo do Super Poder
    superPoder1 = (float)Populacao1 + Area1 + PIB1 + (float)nPontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacao1);
    superPoder2 = (float)Populacao2 + Area2 + PIB2 + (float)nPontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacao2);

    printf("Super Poder da carta %s: %.2f\n", CodigoCarta1, superPoder1);
    printf("Super Poder da carta %s: %.2f\n", CodigoCarta2, superPoder2);

    // Comparação dos Super Poderes
    if (superPoder1 > superPoder2){
        printf("A carta %s é a vencedora!\n", CodigoCarta1);
    } else if (superPoder2 > superPoder1){
        printf("A carta %s é a vencedora!\n", CodigoCarta2);
    } else {
        printf("Empate! As cartas possuem o mesmo Super Poder!\n");
    }

    return 0;
    // Fim do programa
}