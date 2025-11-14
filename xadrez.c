#include <stdio.h>

// ==============================
// FUNÇÕES RECURSIVAS DAS PEÇAS
// ==============================

// ----------------------------
// Movimento da Torre (recursivo)
// ----------------------------
void moverTorre(int casas) {
    if (casas <= 0) return;  // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);   // chamada recursiva
}

// ----------------------------
// Movimento da Rainha (recursivo)
// ----------------------------
void moverRainha(int casas) {
    if (casas <= 0) return;  // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1);  // chamada recursiva
}

// ----------------------------
// Movimento do Bispo (recursivo + loops aninhados)
// ----------------------------
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0) return;  // condição de parada vertical

    for (int h = 1; h <= horizontal; h++) { // loop horizontal
        printf("Cima, Direita\n");
    }

    moverBispo(vertical - 1, horizontal); // recursão vertical
}

// ==============================
// FUNÇÃO PRINCIPAL
// ==============================
int main() {

    // ------------------------
    // Nível Mestre - Movimentos complexos
    // ------------------------
    printf("=== Movimentos das Pecas ===\n\n");

    // ------------------------
    // Torre
    // ------------------------
    int torreCasas = 5;
    printf("=== Torre ===\n");
    moverTorre(torreCasas);
    printf("\n");

    // ------------------------
    // Bispo
    // ------------------------
    int bispoVertical = 5;
    int bispoHorizontal = 1; // cada passo diagonal = 1 horizontal
    printf("=== Bispo ===\n");
    moverBispo(bispoVertical, bispoHorizontal);
    printf("\n");

    // ------------------------
    // Rainha
    // ------------------------
    int rainhaCasas = 8;
    printf("=== Rainha ===\n");
    moverRainha(rainhaCasas);
    printf("\n");

    // ------------------------
    // Cavalo (loops complexos, movimento "L": 2 cima + 1 direita)
    // ------------------------
    printf("=== Cavalo ===\n");

    int movimentosCima = 2;
    int movimentosDireita = 1;

    // Loop aninhado complexo com múltiplas variáveis
    for (int i = 1; i <= movimentosCima; i++) {
        int j = 1;
        while (j <= 1) {
            printf("Cima (%d)\n", i);
            j++;
        }
    }

    int passo = 1;
    while (passo <= movimentosDireita) {
        for (int k = 1; k <= 1; k++) {
            printf("Direita (%d)\n", passo);
        }
        passo++;
    }

    printf("\nFim dos movimentos.\n");

    return 0;
}