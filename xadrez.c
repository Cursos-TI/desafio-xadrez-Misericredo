#include <stdio.h>

int main() {

    // ===============================================
    // NÍVEL NOVATO — Movimentação das Peças
    // ===============================================

    // ------------------------
    // MOVIMENTO DA TORRE (for)
    // ------------------------
    int torreCasas = 5;

    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= torreCasas; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // ------------------------
    // MOVIMENTO DO BISPO (while)
    // ------------------------
    int bispoCasas = 5;
    int contador = 1;

    printf("=== Movimento do Bispo ===\n");
    while (contador <= bispoCasas) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }
    printf("\n");

    // ------------------------
    // MOVIMENTO DA RAINHA (do-while)
    // ------------------------
    int rainhaCasas = 8;
    int r = 1;

    printf("=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d)\n", r);
        r++;
    } while (r <= rainhaCasas);
    printf("\n");


    // ===============================================
    // NÍVEL AVENTUREIRO — Movimento do Cavalo
    // ===============================================

    printf("=== Movimento do Cavalo (FOR + WHILE) ===\n");

    int movimentosBaixo = 2;      // Cavalo anda 2 casas para baixo
    int movimentosEsquerda = 1;   // Cavalo anda 1 casa para a esquerda


    // ------------------------
    // Parte 1: 2 casas para baixo
    // Loop externo: FOR
    // Loop interno: WHILE (executa 1 vez)
    // ------------------------
    for (int i = 1; i <= movimentosBaixo; i++) {

        int controle = 1;
        while (controle == 1) {
            printf("Baixo (%d)\n", i);
            controle++; // encerra o while
        }
    }


    // ------------------------
    // Parte 2: 1 casa para a esquerda
    // Loop externo: WHILE
    // Loop interno: FOR
    // ------------------------
    int passo = 1;

    while (passo <= movimentosEsquerda) {

        for (int j = 1; j <= 1; j++) {
            printf("Esquerda (%d)\n", passo);
        }

        passo++;
    }

    printf("\n");

    return 0;
}