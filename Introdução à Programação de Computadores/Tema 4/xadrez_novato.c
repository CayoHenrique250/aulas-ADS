#include <stdio.h>

int main() {
    // Definição das constantes de movimento (Requisito: valores definidos no código)
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    // --- 1. Simulação da Torre (Utilizando FOR) ---
    // A Torre se move 5 casas para a direita.
    // O 'for' é ideal quando sabemos exatamente quantas vezes queremos repetir algo.
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Pula uma linha para organização visual

    // --- 2. Simulação do Bispo (Utilizando WHILE) ---
    // O Bispo se move 5 casas na diagonal (Cima + Direita).
    // O 'while' verifica a condição antes de executar o bloco.
    printf("--- Movimento do Bispo ---\n");
    int contadorBispo = 0;
    while (contadorBispo < movimentosBispo) {
        // Simula o movimento diagonal imprimindo as duas direções na mesma etapa
        printf("Cima, Direita\n"); 
        contadorBispo++;
    }
    
    printf("\n"); // Pula uma linha para organização visual

    // --- 3. Simulação da Rainha (Utilizando DO-WHILE) ---
    // A Rainha se move 8 casas para a esquerda.
    // O 'do-while' garante que o bloco seja executado pelo menos uma vez antes da verificação.
    printf("--- Movimento da Rainha ---\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}