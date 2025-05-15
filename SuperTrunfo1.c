#include <stdio.h>

int main(){

    // Declaração de variáveis
    char Estado;
    char CodigoCarta[4];
    char NomeCidade[20];
    int Populacao;
    float Area;
    float PIB;
    int nPontosTuristicos;

    // Solicita os dados ao usuário
    printf("Digite o estado: \n");
    scanf("%c", &Estado);
    printf("Digite o código da carta: \n");
    scanf("%s", CodigoCarta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", NomeCidade);
    printf("Digite a população: \n");
    scanf("%d", &Populacao);
    printf("Digite a área: \n");
    scanf("%f", &Area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &nPontosTuristicos);

    // Exibe os dados informados
    printf("Estado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.1f\nPIB: %.2f\nNúmero de pontos turísticos: %d\n", Estado, CodigoCarta, NomeCidade, Populacao, Area, PIB, nPontosTuristicos);

    return 0;


}