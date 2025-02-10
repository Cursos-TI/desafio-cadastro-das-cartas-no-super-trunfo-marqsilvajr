#include <stdio.h>

int main() {
    int codigo[10];
    char populacao[20];
    float area[20];
    char pib[20];
    char pontosTuristicos[20];

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);
    printf("Digite a população: ");
    scanf("%s", populacao);
    printf("Digite a área: ");
    scanf("%s", area);
    printf("Digite o PIB: ");
    scanf("%s", pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%s", pontosTuristicos);

    printf("\n--- Informações da Carta ---\n");
    printf("Código: %s\n", codigo);
    printf("População: %s\n", populacao);
    printf("Área: %s\n", area);
    printf("PIB: %s\n", pib);
    printf("Pontos Turísticos: %s\n", pontosTuristicos);

    return 0;
}
