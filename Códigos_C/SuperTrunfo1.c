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
    scanf(" %c", &Estado1); // Adicionado espaço para consumir '\n' anterior
    printf("Digite o código da primeira carta: \n");
    scanf("%s", CodigoCarta1);
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", NomeCidade1);
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
    scanf(" %c", &Estado2); // Adicionado espaço para consumir '\n' anterior
    printf("Digite o código da segunda carta: \n");
    scanf("%s", CodigoCarta2);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", NomeCidade2);
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

    // Comparações
    int vPopulacao = Populacao1 > Populacao2 ? 1 : 0;
    int vArea = Area1 > Area2 ? 1 : 0;
    int vPIB = PIB1 > PIB2 ? 1 : 0;
    int vPontosTuristicos = nPontosTuristicos1 > nPontosTuristicos2 ? 1 : 0;
    int vDensidade = densidadePopulacao1 < densidadePopulacao2 ? 1 : 0; // Menor vence
    int vPIBperCapita = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
    int vSuperPoder = superPoder1 > superPoder2 ? 1 : 0;

    // Exibe os resultados das comparações
    printf("Resultado das comparações (código da carta vencedora):\n");
    printf("População: %s\n", vPopulacao ? CodigoCarta1 : CodigoCarta2);
    printf("Área: %s\n", vArea ? CodigoCarta1 : CodigoCarta2);
    printf("PIB: %s\n", vPIB ? CodigoCarta1 : CodigoCarta2);
    printf("Nº Pontos Turísticos: %s\n", vPontosTuristicos ? CodigoCarta1 : CodigoCarta2);
    printf("Densidade Populacional: %s\n", vDensidade ? CodigoCarta1 : CodigoCarta2);
    printf("PIB per Capita: %s\n", vPIBperCapita ? CodigoCarta1 : CodigoCarta2);
    printf("Super Poder: %s\n", vSuperPoder ? CodigoCarta1 : CodigoCarta2);

    return 0;
    // Fim do programa
}