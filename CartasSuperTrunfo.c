#include <stdio.h>

int main() {
    char codigo[10];
    float populacao, area, pib, pontosTuristicos;
    float densidadePopulacional, pibPerCapita;

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);
    printf("Digite a população: ");
    scanf("%f", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%f", &pontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    printf("\n--- Informações da Carta ---\n");
    printf("Código: %s\n", codigo);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %.2f\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", pibPerCapita);

    return 0;
}