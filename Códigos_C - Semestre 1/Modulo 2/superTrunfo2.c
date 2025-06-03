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
    int opcao;


    printf ("*** Super Trunfo ***\n\n");
    printf  ("Vamos Cadastrar duas cartas de Super Trunfo!\n\n");

    // Solicita os dados ao usuário para a primeira carta
    printf("Digite o primeiro estado: ");
    scanf(" %c", &Estado1);
    printf("Digite o código da primeira carta: ");
    scanf("%s", &CodigoCarta1);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &NomeCidade1);
    printf("Digite a população da primeira cidade: ");
    scanf("%lu", &Populacao1);
    printf("Digite a área da primeira cidade: ");
    scanf("%f", &Area1);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &nPontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidadePopulacao1 = (float)Populacao1 / Area1;
    pibPerCapita1 = (PIB1 * 1e9f) / (float)Populacao1;

    // Solicita os dados ao usuário para a segunda carta
    printf("\nDigite o segundo estado: ");
    scanf(" %c", &Estado2); 
    printf("Digite o código da segunda carta: ");
    scanf("%s", &CodigoCarta2);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &NomeCidade2);
    printf("Digite a população da segunda cidade: ");
    scanf("%lu", &Populacao2);
    printf("Digite a área da segunda cidade: ");
    scanf("%f", &Area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &nPontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidadePopulacao2 = (float)Populacao2 / Area2;
    pibPerCapita2 = (PIB2 * 1e9f) / (float)Populacao2;

    // Exibe os dados da primeira carta
    printf("\n** Carta 1 **\nEstado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.1f\nPIB: %.2f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %.2f habitantes/KM²\nPIB per Capita: %.2f Reais.\n\n", Estado1, CodigoCarta1, NomeCidade1, Populacao1, Area1, PIB1, nPontosTuristicos1, densidadePopulacao1, pibPerCapita1);

    // Exibe os dados da segunda carta
    printf("** Carta 2 **\nEstado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.1f\nPIB: %.2f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %.2f habitantes/KM²\nPIB per Capita: %.2f Reais.\n\n", Estado2, CodigoCarta2, NomeCidade2, Populacao2, Area2, PIB2, nPontosTuristicos2, densidadePopulacao2, pibPerCapita2);

    printf("\n** Comparação das cartas **\n\n");
    printf("Selecione o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Selecione a opção desejada (1-5): ");

    scanf("%d", &opcao);

    switch (opcao){

    case 1:
        printf("\n** RESULTADO **\n");
        printf("Cidades comparadas: %s e %s\n", NomeCidade1, NomeCidade2);
        printf("Atributo escolhido: População\n");
        printf("População de %s (%s): %lu\n", NomeCidade1, CodigoCarta1, Populacao1);
        printf("População de %s (%s): %lu\n", NomeCidade2, CodigoCarta2, Populacao2);



        if (Populacao1>Populacao2)
        {
            printf("A carta vencedora é a %s (%s) com população maior.\n", CodigoCarta1, NomeCidade1);
        }
        else if (Populacao1<Populacao2)
        {
            printf("A carta vencedora é a %s (%s) com população maior.\n", CodigoCarta2, NomeCidade2);
        }
        else
        {
            printf("As cartas são iguais em população.\n");
        }

        break;
    
    case 2:
        printf("\n** RESULTADO **\n");
        printf("Cidades comparadas: %s e %s\n", NomeCidade1, NomeCidade2);
        printf("Atributo escolhido: Área\n");
        printf("Área de %s (%s): %.1f KM²\n", NomeCidade1, CodigoCarta1, Area1);
        printf("Área de %s (%s): %.1f KM²\n", NomeCidade2, CodigoCarta2, Area2);

        if (Area1>Area2)
        {
            printf("A carta vencedora é a %s (%s) com área maior.\n", CodigoCarta1, NomeCidade1);
        }
        else if (Area1<Area2)
        {
            printf("A carta vencedora é a %s (%s) com área maior.\n", CodigoCarta2, NomeCidade2);
        }
        else
        {
            printf("As cartas são iguais em área.\n");
        }

        break;
    case 3:
        printf("\n** RESULTADO **\n");
        printf("Cidades comparadas: %s e %s\n", NomeCidade1, NomeCidade2);
        printf("Atributo escolhido: PIB\n");
        printf("PIB de %s (%s): %.2f bilhões de Reais\n", NomeCidade1, CodigoCarta1, PIB1);
        printf("PIB de %s (%s): %.2f bilhões de Reais\n", NomeCidade2, CodigoCarta2, PIB2);

        if (PIB1>PIB2)
        {
            printf("A carta vencedora é a %s (%s) com PIB maior.\n", CodigoCarta1, NomeCidade1);
        }
        else if (PIB1<PIB2)
        {
            printf("A carta vencedora é a %s (%s) com PIB maior.\n", CodigoCarta2, NomeCidade2);
        }
        else
        {
            printf("As cartas são iguais em PIB.\n");
        }

        break;
    case 4:
        printf("\n** RESULTADO **\n");
        printf("Cidades comparadas: %s e %s\n", NomeCidade1, NomeCidade2);
        printf("Atributo escolhido: Número de pontos turísticos\n");
        printf("Número de pontos turísticos em %s (%s): %d\n", NomeCidade1, CodigoCarta1, nPontosTuristicos1);
        printf("Número de pontos turísticos em %s (%s): %d\n", NomeCidade2, CodigoCarta2, nPontosTuristicos2);

        if (nPontosTuristicos1>nPontosTuristicos2)
        {
            printf("A carta vencedora é a %s (%s) com mais pontos turísticos.\n", CodigoCarta1, NomeCidade1);
        }
        else if (nPontosTuristicos1<nPontosTuristicos2)
        {
            printf("A carta vencedora é a %s (%s) com mais pontos turísticos.\n", CodigoCarta2, NomeCidade2);
        }
        else
        {
            printf("As cartas são iguais em número de pontos turísticos.\n");
        }

        break;
    case 5:
        printf("\n** RESULTADO **\n");
        printf("Cidades comparadas: %s e %s\n", NomeCidade1, NomeCidade2);
        printf("Atributo escolhido: Densidade Populacional\n");
        printf("Densidade populacional de %s (%s): %.2f habitantes/KM²\n", NomeCidade1, CodigoCarta1, densidadePopulacao1);
        printf("Densidade populacional de %s (%s): %.2f habitantes/KM²\n", NomeCidade2, CodigoCarta2, densidadePopulacao2);

        if (densidadePopulacao1<densidadePopulacao2)
        {
            printf("A carta vencedora é a %s (%s) com menor densidade populacional.\n", CodigoCarta1, NomeCidade1);
        }
        else if (densidadePopulacao1>densidadePopulacao2)
        {
            printf("A carta vencedora é a %s (%s) com menor densidade populacional.\n", CodigoCarta2, NomeCidade2);
        }
        else
        {
            printf("As cartas são iguais em densidade populacional.\n");
        }

        break;
    
    default:
        printf("Opção inválida! Por favor, selecione uma opção entre 1 e 5.\n");
        break;
    }
    return 0;
    // Fim do programa
}