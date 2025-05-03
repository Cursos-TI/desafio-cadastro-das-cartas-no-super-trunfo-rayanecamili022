#include <stdio.h>

int main() {
    // Carta 1 - Brasil
    char nome1[] = "Brasil";
    int pop1 = 213000000;     // população
    int area1 = 8516000;      // km²
    int pib1 = 1445000;       // em milhões de dólares
    int dens1 = 25;           // hab/km²

    // Carta 2 - Argentina
    char nome2[] = "Argentina";
    int pop2 = 45000000;
    int area2 = 2780000;
    int pib2 = 491000;
    int dens2 = 16;

    int op1, op2; // atributos escolhidos
    int v1_c1, v1_c2, v2_c1, v2_c2;
    int soma1, soma2;

    // Menu de atributos
    printf("Atributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo (1 a 4): ");
    scanf("%d", &op1);

    // Escolha do segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &op2);

    // Verificação de validade
    if (op1 < 1 || op1 > 4 || op2 < 1 || op2 > 4 || op1 == op2) {
        printf("Erro: atributos inválidos ou repetidos!\n");
        return 1;
    }

    // Switch para primeiro atributo
    switch (op1) {
        case 1: v1_c1 = pop1; v1_c2 = pop2; break;
        case 2: v1_c1 = area1; v1_c2 = area2; break;
        case 3: v1_c1 = pib1; v1_c2 = pib2; break;
        case 4: v1_c1 = dens1; v1_c2 = dens2; break;
        default: printf("Erro!\n"); return 1;
    }

    // Switch para segundo atributo
    switch (op2) {
        case 1: v2_c1 = pop1; v2_c2 = pop2; break;
        case 2: v2_c1 = area1; v2_c2 = area2; break;
        case 3: v2_c1 = pib1; v2_c2 = pib2; break;
        case 4: v2_c1 = dens1; v2_c2 = dens2; break;
        default: printf("Erro!\n"); return 1;
    }

    // Mostrar dados das cartas
    printf("\nCarta 1: %s\n", nome1);
    printf("Atributo %d: %d\n", op1, v1_c1);
    printf("Atributo %d: %d\n", op2, v2_c1);

    printf("\nCarta 2: %s\n", nome2);
    printf("Atributo %d: %d\n", op1, v1_c2);
    printf("Atributo %d: %d\n", op2, v2_c2);

    // Somar os atributos
    soma1 = v1_c1 + v2_c1;
    soma2 = v1_c2 + v2_c2;

    // Mostrar somas
    printf("\nSoma dos atributos:\n");
    printf("%s: %d\n", nome1, soma1);
    printf("%s: %d\n", nome2, soma2);

    // Resultado final
    printf("\nResultado final:\n");
    if (soma1 > soma2) {
        printf("Vencedor: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
