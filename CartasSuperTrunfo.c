#include <stdio.h>

// Função recursiva para movimentação da Torre (horizontal para a Direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para movimentação da Rainha (horizontal para a Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva com loops aninhados para o Bispo (diagonal Cima-Direita)
void moverBispo(int casas, int atual) {
    if (atual < casas) {
        for (int v = 0; v < 1; v++) { // movimento vertical (1 passo)
            for (int h = 0; h < 1; h++) { // movimento horizontal (1 passo)
                printf("Cima - Direita\n");
            }
        }
        moverBispo(casas, atual + 1); // chamada recursiva
    }
}

// Função para movimentação do Cavalo (duas para cima e uma para a direita)
void moverCavalo(int movimentos) {
    // Cada movimento do cavalo será em "L": duas casas para cima e uma para a direita
    for (int i = 0; i < movimentos; i++) {
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima\n");
            if (cima == 1) {
                continue; // prossegue para direita depois de subir 2
            }
        }

        for (int direita = 0; direita < 1; direita++) {
            printf("Direita\n");
        }

        printf("\n"); // separador visual entre movimentos
    }
}

int main() {
    int opcaoMenu;
    const int casasTorre = 3;
    const int casasRainha = 4;
    const int casasBispo = 2;
    const int movimentosCavalo = 2;

    do {
        printf("\n--------------------- \n");
        printf("|-- MENU DE PECAS --| \n");
        printf("| 1. Torre          | \n");
        printf("| 2. Bispo          | \n");
        printf("| 3. Rainha         | \n");
        printf("| 4. Cavalo         | \n");
        printf("| 5. Sair           | \n");
        printf("--------------------- \n");
        printf("Escolha uma peca para mover: ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu) {
            case 1:
                printf("\nTorre: Move-se!\n");
                moverTorre(casasTorre);
                break;

            case 2:
                printf("\nBispo: Move-se!\n");
                moverBispo(casasBispo, 0);
                break;

            case 3:
                printf("\nRainha: Move-se!\n");
                moverRainha(casasRainha);
                break;

            case 4:
                printf("\nCavalo: Move-se!\n");
                moverCavalo(movimentosCavalo);
                break;

            case 5:
                printf("\nObrigado por jogar!\nSaindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcaoMenu != 5);

    return 0;
}
