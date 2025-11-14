#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato: Movimentação das Peças (Torre, Bispo e Rainha)
// Autor: Gabriel (ou coloque seu nome)
// Objetivo: Demonstrar movimentação básica usando for, while e do-while

int main() {

    // ==========================
    // CONFIGURAÇÃO DOS MOVIMENTOS
    // ==========================

    int casasTorre = 5;   // Torre anda 5 casas para a Direita
    int casasBispo = 5;   // Bispo anda 5 casas na diagonal "Cima, Direita"
    int casasRainha = 8;  // Rainha anda 8 casas para a Esquerda

    // ===================================
    // MOVIMENTAÇÃO DA TORRE — usando FOR
    // ===================================
    printf("=== Movimento da Torre (FOR) ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // ====================================================
    // MOVIMENTAÇÃO DO BISPO — usando WHILE (diagonal)
    // ====================================================
    printf("=== Movimento do Bispo (WHILE) ===\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }
    printf("\n");

    // ========================================================
    // MOVIMENTAÇÃO DA RAINHA — usando DO-WHILE
    // ========================================================
    printf("=== Movimento da Rainha (DO-WHILE) ===\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    return 0;
}