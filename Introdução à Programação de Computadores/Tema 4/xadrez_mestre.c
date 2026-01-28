#include <stdio.h>

// Definição das constantes de movimento
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define MOV_CAVALO_VERT 2
#define MOV_CAVALO_HORIZ 1

// --- Funções Recursivas ---

// 1. Recursividade da Torre
// Recebe o número de casas que faltam mover.
// Se ainda faltam casas (n > 0), imprime e chama a si mesma com (n - 1).
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva
    }
}

// 2. Recursividade da Rainha
// Segue a mesma lógica da Torre, mas para a direção Esquerda.
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Chamada recursiva
    }
}

// 3. Recursividade + Loops Aninhados do Bispo
// A função é recursiva (controla o total de passos diagonais).
// DENTRO de cada passo recursivo, usamos loops aninhados para compor o movimento (Vertical + Horizontal).
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop Externo: Movimento Vertical (Cima)
        for (int i = 0; i < 1; i++) {
            printf("Cima");
            
            // Loop Interno: Movimento Horizontal (Direita)
            for (int j = 0; j < 1; j++) {
                printf(", Direita\n");
            }
        }
        moverBispo(casas - 1); // Chamada recursiva para a próxima casa diagonal
    }
}

int main() {
    // --- Execução das Peças Recursivas ---
    
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(MOV_TORRE);
    printf("\n");

    printf("--- Movimento do Bispo (Recursivo + Loops Aninhados) ---\n");
    moverBispo(MOV_BISPO);
    printf("\n");

    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(MOV_RAINHA);
    printf("\n");

    // --- 4. Movimento do Cavalo (Loops Complexos) ---
    // Requisito: Loops aninhados, múltiplas variáveis, break e continue.
    // O Cavalo move 2 para Cima e 1 para Direita.
    
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");
    
    // Inicializamos duas variáveis no for: 'i' (vertical) e 'j' (horizontal)
    for (int i = 0, j = 0; i < MOV_CAVALO_VERT; i++) {
        
        printf("Cima\n"); // Parte vertical do L

        // Lógica de controle de fluxo:
        // Se for a primeira iteração (i == 0), usamos 'continue' para pular
        // qualquer código abaixo e ir para a próxima iteração do loop,
        // pois o Cavalo ainda precisa subir mais uma casa antes de virar.
        if (i == 0) {
            continue; 
        }

        // Se chegamos aqui, significa que i == 1 (segunda casa para cima).
        // Iniciamos o loop aninhado para o movimento horizontal.
        while (j < MOV_CAVALO_HORIZ) {
            printf("Direita\n");
            j++;
            
            // O 'break' aqui serve para garantir que o loop pare imediatamente
            // após imprimir a direção, cumprindo o requisito de uso de 'break'.
            break; 
        }
    }

    return 0;
}