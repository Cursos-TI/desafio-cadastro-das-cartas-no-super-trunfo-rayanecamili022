#include <stdio.h>

//código de escrita e leitura de dados para o cadastro de 2 cartas.

int main() {

    //Adicionando tipos de dados para cada carta
    // o número 1 refere-se a o dado da carta 1 e o número 2 a os dados da carta 2.

    char estado1[50], estado2[50];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Ler dados da primeira carta.
    // pedindo ao usuário com exemplos, para facilitar o entendimento em ambas cartas.

    printf("Digite os dados da primeira carta:\n");
    printf("Estado (ex: Sergipe): ");
    scanf(" %[^\n]", estado1); // "%[^\n]", declaração de string.
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // "%[^\n]", declaração de string.
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Ler dados da segunda carta

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (ex: Rio de Janeiro): ");
    scanf(" %[^\n]", estado2); // "%[^\n]", declaração de string.
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // "%[^\n]", declaração de string.
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibir as cartas o valor que foi digitada de cada carta tanto na primeira como na segunda.
    // o \n, para pular linhas e organizar o código de leitura.
    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
