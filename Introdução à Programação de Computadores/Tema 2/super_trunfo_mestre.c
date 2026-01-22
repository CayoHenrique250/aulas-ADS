#include <stdio.h>

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS ---
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1; // Mudança: Tipo maior para grandes números
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1; // Variáveis calculadas

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2; // Mudança: Tipo maior para grandes números
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2; // Variáveis calculadas

    // --- LEITURA CARTA 1 ---
    printf("=-=-=-=-=-=-= Cadastro da Carta 1 =-=-=-=-=-=-=\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    
    printf("População: ");
    scanf("%lu", &populacao1); // %lu é usado para unsigned long int

    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; // Convertendo Bilhões para reais
    // Super Poder: Soma de tudo + inverso da densidade (1/densidade)
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);


    // --- LEITURA CARTA 2 ---
    printf("\n=-=-=-=-=-=-= Cadastro da Carta 2 =-=-=-=-=-=-=\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("População: ");
    scanf("%lu", &populacao2); // %lu novamente

    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);


    // --- EXIBIÇÃO DOS DADOS CALCULADOS ---
    printf("\n=============================\n");
    printf("RELATÓRIO DE ATRIBUTOS\n");
    printf("=============================\n");
    // Exibimos apenas os cálculos importantes para conferência
    printf("Carta 1 - %s (%s): Densidade: %.2f | PIB/Capita: %.2f | Super Poder: %.2f\n", 
           nomeCidade1, codigo1, densidade1, pibPerCapita1, superPoder1);
    printf("Carta 2 - %s (%s): Densidade: %.2f | PIB/Capita: %.2f | Super Poder: %.2f\n", 
           nomeCidade2, codigo2, densidade2, pibPerCapita2, superPoder2);


    // --- COMPARAÇÃO DAS CARTAS ---
    // A lógica é: (Valor1 > Valor2). Se for verdade, retorna 1. Se for falso, retorna 0.
    // Para Densidade, a lógica é invertida: (Valor1 < Valor2) é o critério de vitória.

    printf("\n=============================\n");
    printf("COMPARAÇÃO DE CARTAS (1 = Carta 1 venceu | 0 = Carta 2 venceu)\n");
    printf("=============================\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    
    // Atenção aqui: Na densidade, vence quem tem o MENOR valor.
    // Se Densidade 1 < Densidade 2, a Carta 1 vence (imprime 1).
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}