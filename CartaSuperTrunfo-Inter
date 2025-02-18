#include <stdio.h>

int main() {
    // Variáveis para as cartas Carta 01 e Carta 02
    char codigoCarta01[10], codigoCarta02[10];
    unsigned long int populacao01, populacao02;
    float areaterritorial01, areaterritorial02, pib01, pib02, pontostur01, pontostur02;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoderC1, superPoderC2;

    // Entrada Dados Carta 01
    printf("Digite o código da primeira Carta 01: ");
    scanf("%s", codigoCarta01);
    printf("Digite a população, área, PIB e pontos turísticos da Carta 01: ");
    scanf("%lu %f %f %f", &populacao01, &areaterritorial01, &pib01, &pontostur01);

    // Entrada Dados Carta 02
    printf("Digite o código da segunda Carta 02: ");
    scanf("%s", codigoCarta02);
    printf("Digite a população, área, PIB e pontos turísticos da Carta 02: ");
    scanf("%lu %f %f %f", &populacao02, &areaterritorial02, &pib02, &pontostur02);

    // Densidade Populacional e PIB per Capita
    densidade1 = populacao01 / areaterritorial01;
    densidade2 = populacao02 / areaterritorial02;
    pibPerCapita1 = pib01 / populacao01;
    pibPerCapita2 = pib02 / populacao02;

    // Super Poder (atributos somados e inverso da densidade)
    superPoderC1 = populacao01 + areaterritorial01 + pib01 + pontostur01 + pibPerCapita1 + (1 / densidade1);
    superPoderC2 = populacao02 + areaterritorial02 + pib02 + pontostur02 + pibPerCapita2 + (1 / densidade2);

    // RESULTADO
    printf("\n*-* Comparação de Cartas *-*\n");

    printf("População: Carta %d venceu (%d)\n", (populacao01 > populacao02) ? 1 : 2, (populacao01 > populacao02));
    printf("Área: Carta %d venceu (%d)\n", (areaterritorial01 > areaterritorial02) ? 1 : 2, (areaterritorial01 > areaterritorial02));
    printf("PIB: Carta %d venceu (%d)\n", (pib01 > pib02) ? 1 : 2, (pib01 > pib02));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontostur01 > pontostur02) ? 1 : 2, (pontostur01 > pontostur02));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));  //Valor a ser obtido = Ivertido
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoderC1 > superPoderC2) ? 1 : 2, (superPoderC1 > superPoderC2));

    return 0;
}