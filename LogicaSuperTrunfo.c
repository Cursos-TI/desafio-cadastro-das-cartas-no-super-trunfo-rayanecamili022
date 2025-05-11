#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib; // em bilhões
    int pontosTuristicos;
    float densidadePopulacional;
    double pibPerCapita;
} Carta;

void calcularDados(Carta *c) {
    c->densidadePopulacional = (float)c->populacao / c->area;
    c->pibPerCapita = (double)(c->pib * 1000000000) / c->populacao;
}

void imprimirCarta(Carta c, int numero) {
    printf("\n-> Carta %d <-\n", numero);
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", c.pibPerCapita);
}

void lerDados(Carta *c, int num) {
    printf("\nDigite os dados da Carta %d:\n", num);

    printf("Estado (letra): ");
    scanf(" %c", &c->estado);

    printf("Código (ex: A01): ");
    scanf("%s", c->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", c->nomeCidade); // permite espaços

populacao_novamente:
    printf("População (número positivo): ");
    scanf("%d", &c->populacao);
    if (c->populacao <= 0) {
        printf("População inválida. Digite novamente.\n");
        goto populacao_novamente;
    }

area_novamente:
    printf("Área (km², maior que zero): ");
    scanf("%f", &c->area);
    if (c->area <= 0) {
        printf("Área inválida. Digite novamente.\n");
        goto area_novamente;
    }

pib_novamente:
    printf("PIB (em bilhões de reais, positivo): ");
    scanf("%f", &c->pib);
    if (c->pib <= 0) {
        printf("PIB inválido. Digite novamente.\n");
        goto pib_novamente;
    }

turismo_novamente:
    printf("Número de pontos turísticos (>= 0): ");
    scanf("%d", &c->pontosTuristicos);
    if (c->pontosTuristicos < 0) {
        printf("Valor inválido. Digite novamente.\n");
        goto turismo_novamente;
    }
}

int main() {
    Carta carta1, carta2;
    int pontos1 = 0, pontos2 = 0;

    lerDados(&carta1, 1);
    lerDados(&carta2, 2);

    calcularDados(&carta1);
    calcularDados(&carta2);

    imprimirCarta(carta1, 1);
    imprimirCarta(carta2, 2);

    printf("\n--> Comparação das Cartas: <--\n");

    printf("População: ");
    if (carta1.populacao > carta2.populacao) {
        printf("Carta 1 venceu (1)\n");
        pontos1++;
    } else {
        printf("Carta 2 venceu (0)\n");
        pontos2++;
    }

    printf("Área: ");
    if (carta1.area > carta2.area) {
        printf("Carta 1 venceu (1)\n");
        pontos1++;
    } else {
        printf("Carta 2 venceu (0)\n");
        pontos2++;
    }

    printf("PIB: ");
    if (carta1.pib > carta2.pib) {
        printf("Carta 1 venceu (1)\n");
        pontos1++;
    } else {
        printf("Carta 2 venceu (0)\n");
        pontos2++;
    }

    printf("Pontos Turísticos: ");
    if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
        printf("Carta 1 venceu (1)\n");
        pontos1++;
    } else {
        printf("Carta 2 venceu (0)\n");
        pontos2++;
    }

    printf("Densidade: ");
    if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
        printf("Carta 1 venceu (1)\n");
        pontos1++;
    } else {
        printf("Carta 2 venceu (0)\n");
        pontos2++;
    }

    printf("PIB per Capita: ");
    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("Carta 1 venceu (1)\n");
        pontos1++;
    } else {
        printf("Carta 2 venceu (0)\n");
        pontos2++;
    }

    printf("Super Poder: ");
    if (pontos1 > pontos2) {
        printf("Carta 1 foi a grande vencedora!\n");
    } else if (pontos2 > pontos1) {
        printf("Carta 2 foi a grande vencedora!\n");
    } else {
        printf("Empate entre as cartas!\n");
    }

    return 0;
}
