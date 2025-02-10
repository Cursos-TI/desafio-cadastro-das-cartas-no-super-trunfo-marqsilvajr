#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
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
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
