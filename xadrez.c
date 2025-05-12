#include <stdio.h>

// Função para mover a Torre para a direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função  para mover a Rainha para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função  para mover o Bispo na diagonal (cima-direita)
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1);
}

// Função com loops aninhados para o movimento do bispo
void moverBispoComLoops(int vertical, int horizontal) {
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Diagonal (Cima Direita)\n");
        }
    }
}

// Função com loops aninhados e múltiplas condições para o Cavalo
void moverCavalo() {
    int movimentos = 3; // Número de "L" a serem executados
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        int casasCima = 0;
        int casasDireita = 0;

        for (int j = 0; j < 3; j++) {
            if (casasCima < 2) {
                printf("Cima\n");
                casasCima++;
                continue; // volta ao loop se ainda não subiu 2
            }

            if (casasDireita < 1) {
                printf("Direita\n");
                casasDireita++;
                break; // sai do loop após 1 direita
            }
        }
    }
}

int main() {
    // Número de casas a se mover para cada peça (definido no código)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo com recursão
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // Bispo com loops aninhados
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(2, 2); // por exemplo, 2x2 diagonais

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo com loops complexos
    moverCavalo();

    return 0;
}
