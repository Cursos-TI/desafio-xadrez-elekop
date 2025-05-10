#include <stdio.h>

int main() {
    // Movimento da TORRE (5 casas para a direita) - usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO (5 casas na diagonal cima-direita) - usando WHILE
    printf("\nMovimento do Bispo:\n");
    int passoBispo = 1;
    while (passoBispo <= 5) {
        printf("Cima Direita\n");
        passoBispo++;
    }

    // Movimento da RAINHA (8 casas para a esquerda) - usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int passoRainha = 1;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= 8);

    // Movimento do CAVALO (2 para baixo, 1 para a esquerda) - usando FOR e WHILE
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 1; i++) { // Executa 1 movimentos de "L"
        int passo = 1;
        while (passo <= 2) { // 2 passos para baixo
            printf("Baixo\n");
            passo++;
        }
        printf("Esquerda\n"); // 1 passo para esquerda após os 2 passos para baixo
    }

    return 0;
}

