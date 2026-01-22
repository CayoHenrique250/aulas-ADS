#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1; // Variáveis calculadas

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2; // Variáveis calculadas

    // --- LEITURA CARTA 1 ---
    printf("=-=-=-=-=-=-= Cadastro da Carta 1 =-=-=-=-=-=-=\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê string com espaços
    
    printf("População: ");
    scanf("%lu", &populacao1); 

    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; 

    // --- LEITURA CARTA 2 ---
    printf("\n=-=-=-=-=-=-= Cadastro da Carta 2 =-=-=-=-=-=-=\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); 
    
    printf("População: ");
    scanf("%lu", &populacao2); 

    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;


    // --- LÓGICA DE COMPARAÇÃO ---
    // Atributo escolhido: POPULAÇÃO
    // Regra: Quem tem MAIOR população vence.
    
    printf("\n=============================\n");
    printf("COMPARANDO CARTAS\n");
    printf("=============================\n");
    
    printf("Atributo de comparação: População\n\n");
    
    printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomeCidade2, estado2, populacao2);
    
    printf("\n-----------------------------\n");
    
    // Estrutura de decisão IF-ELSE
    if (populacao1 > populacao2) {
        printf("Resultado: A Carta 1 (%s) VENCEU!\n", nomeCidade1);
    } else {
        printf("Resultado: A Carta 2 (%s) VENCEU!\n", nomeCidade2);
    }
    
    printf("-----------------------------\n");


    return 0;
}