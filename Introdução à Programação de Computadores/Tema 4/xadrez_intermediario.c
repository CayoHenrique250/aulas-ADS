#include <stdio.h>

int main() {
    // --- Definição das constantes de movimento ---
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;
    int movimentosCavaloVertical = 2;   // Quantidade de casas para baixo
    int movimentosCavaloHorizontal = 1; // Quantidade de casas para esquerda

    // ============================================================
    // NÍVEL BÁSICO: Torre, Bispo e Rainha
    // ============================================================

    // 1. Torre (FOR) - Movimento Linear
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Bispo (WHILE) - Movimento Diagonal
    printf("--- Movimento do Bispo ---\n");
    int contadorBispo = 0;
    while (contadorBispo < movimentosBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // 3. Rainha (DO-WHILE) - Movimento Linear
    printf("--- Movimento da Rainha ---\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);
    
    printf("\n");

    // ============================================================
    // NÍVEL INTERMEDIÁRIO: Cavalo
    // ============================================================

    // 4. Cavalo (Loops Aninhados / Lógica Complexa)
    // O Cavalo faz um "L": 2 casas para baixo, depois 1 para a esquerda.
    
    printf("--- Movimento do Cavalo ---\n");

    // Loop Externo (FOR): Responsável pela movimentação vertical (Baixo)
    for (int i = 0; i < movimentosCavaloVertical; i++) {
        
        printf("Baixo\n"); // Imprime o movimento vertical a cada iteração

        // Verificação para o Loop Interno:
        // O Cavalo só vira à esquerda DEPOIS de completar o movimento vertical.
        // Portanto, verificamos se estamos na última iteração do loop externo (i == 1).
        if (i == movimentosCavaloVertical - 1) {
            
            int j = 0;
            // Loop Interno (WHILE): Responsável pela movimentação horizontal (Esquerda)
            // Este loop está aninhado dentro do FOR.
            while (j < movimentosCavaloHorizontal) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}