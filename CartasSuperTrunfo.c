#include <stdio.h>

int main() {
    // Carta 1
    char estado1;                  // Variável para armazenar o estado da Carta 1
    char codigo1[10];              // Variável para armazenar o código da Carta 1
    char nomeCidade1[50];          // Variável para armazenar o nome da cidade da Carta 1
    int populacao1, pontosTuristicos1; // Variáveis para armazenar a população e o número de pontos turísticos da Carta 1
    float area1, pib1;             // Variáveis para armazenar a área e o PIB da Carta 1
    float densidade1, pibPerCapita1; // Variáveis para armazenar a densidade populacional e PIB per capita da Carta 1

    // Carta 2
    char estado2;                  // Variável para armazenar o estado da Carta 2
    char codigo2[10];              // Variável para armazenar o código da Carta 2
    char nomeCidade2[50];          // Variável para armazenar o nome da cidade da Carta 2
    int populacao2, pontosTuristicos2; // Variáveis para armazenar a população e o número de pontos turísticos da Carta 2
    float area2, pib2;             // Variáveis para armazenar a área e o PIB da Carta 2
    float densidade2, pibPerCapita2; // Variáveis para armazenar a densidade populacional e PIB per capita da Carta 2

    // Entrada dos dados da Carta 1
    printf("Carta 1:\n");
    
    printf("Estado: ");
    scanf(" %c", &estado1); // Lê um único caractere para o estado (ex: 'SP')

    printf("Código: ");
    scanf("%s", codigo1); // Lê o código da cidade (ex: 'SP01')

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê o nome da cidade, permitindo espaços (ex: 'São Paulo')

    printf("População: ");
    scanf("%d", &populacao1); // Lê o valor da população

    printf("Área (em km²): ");
    scanf("%f", &area1); // Lê o valor da área

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1); // Lê o valor do PIB em bilhões

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê o número de pontos turísticos

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1; // Calcula a densidade populacional (população / área)
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Calcula o PIB per capita (PIB em reais / população)

    // Entrada dos dados da Carta 2
    printf("\nCarta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2); // Lê o estado da Carta 2

    printf("Código: ");
    scanf("%s", codigo2); // Lê o código da cidade da Carta 2

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê o nome da cidade da Carta 2

    printf("População: ");
    scanf("%d", &populacao2); // Lê o valor da população da Carta 2

    printf("Área (em km²): ");
    scanf("%f", &area2); // Lê o valor da área da Carta 2

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2); // Lê o valor do PIB da Carta 2

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2); // Lê o número de pontos turísticos da Carta 2

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2; // Calcula a densidade populacional da Carta 2
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Calcula o PIB per capita da Carta 2

    // Saída formatada da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1); // Exibe o estado da Carta 1
    printf("Código: %s\n", codigo1); // Exibe o código da Carta 1
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe o nome da cidade da Carta 1
    printf("População: %d\n", populacao1); // Exibe a população da Carta 1
    printf("Área: %.2f km²\n", area1); // Exibe a área da Carta 1 com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB da Carta 1 com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos da Carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Exibe a densidade populacional da Carta 1 com 2 casas decimais
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); // Exibe o PIB per capita da Carta 1 com 2 casas decimais

    // Saída formatada da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2); // Exibe o estado da Carta 2
    printf("Código: %s\n", codigo2); // Exibe o código da Carta 2
    printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade da Carta 2
    printf("População: %d\n", populacao2); // Exibe a população da Carta 2
    printf("Área: %.2f km²\n", area2); // Exibe a área da Carta 2 com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB da Carta 2 com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos da Carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Exibe a densidade populacional da Carta 2 com 2 casas decimais
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); // Exibe o PIB per capita da Carta 2 com 2 casas decimais

    return 0; // Finaliza o programa
}
